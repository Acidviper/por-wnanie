#include "..\..\script_macros.hpp"
/*
*	File: fn_keyHandler.sqf
*	Author: Bryan "Tonic" Boardwine
*
*	Description:
*	Main key handler for event 'keyDown'
*/
private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh","_locked","_interactionKey","_mapKey","_interruptionKeys"];
_ctrl = SEL(_this,0);
_code = SEL(_this,1);
_shift = SEL(_this,2);
_ctrlKey = SEL(_this,3);
_alt = SEL(_this,4);
_speed = speed cursorTarget;
_handled = false;

_interactionKey = if((EQUAL(count (actionKeys "User10"),0))) then {219} else {(actionKeys "User10") select 0};
_mapKey = SEL(actionKeys "ShowMap",0);
//hint str _code;
_interruptionKeys = [17,30,31,32]; //A,S,W,D

//Vault handling...
if((_code in (actionKeys "GetOver") || _code in (actionKeys "salute") || _code in (actionKeys "SitDown") || _code in (actionKeys "Throw") || _code in (actionKeys "GetIn") || _code in (actionKeys "GetOut") || _code in (actionKeys "Fire") || _code in (actionKeys "ReloadMagazine") || _code in [16,18]) && ((player GVAR ["restrained",false]) || (player GVAR ["playerSurrender",false]) || life_isknocked || life_istazed)) exitWith {
	true;
};

if(life_action_inUse) exitWith {
	if(!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true;};
	_handled;
};

//Hotfix for Interaction key not being able to be bound on some operation systems.
if(!(EQUAL(count (actionKeys "User10"),0)) && {(inputAction "User10" > 0)}) exitWith {
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	if(!life_action_inUse) then {
		[] spawn {
			private "_handle";
			_handle = [] spawn life_fnc_actionKeyHandler;
			waitUntil {scriptDone _handle};
			life_action_inUse = false;
			[] call life_fnc_playerSkins;
		};
	};
	true;
};

if (life_container_active) then {
	switch (_code) do {
		//space key
		case 57: {
			[] spawn life_fnc_placestorage;
		};
	};
	true;
};

switch (_code) do {
	//Space key for Jumping
	case 57: {
		if(isNil "jumpActionTime") then {jumpActionTime = 0;};
		if(_shift && {!(EQUAL(animationState player,"AovrPercMrunSrasWrflDf"))} && {isTouchingGround player} && {EQUAL(stance player,"STAND")} && {speed player > 2} && {!life_is_arrested} && {SEL((velocity player),2) < 2.5} && {time - jumpActionTime > 1.5}) then {
			jumpActionTime = time; //Update the time.
			[player] remoteExec ["life_fnc_jumpFnc",RANY]; //Global execution
			_handled = true;
		};
	};

	//Surrender (Shift + B)
	case 48: {
		if(_shift) then {
			if(player GVAR ["playerSurrender",false]) then {
				player SVAR ["playerSurrender",false,true];
			} else {
				[] spawn life_fnc_surrender;
			};
			_handled = true;
		};
	};

	case 210:{	if(_shift) then {
		switch (player getVariable["Earplugs",0]) do {
				case 0: {hintSilent "Ear Plugs 90%"; 1 fadeSound 0.1; player setVariable ["Earplugs", 10];
				};
				case 10: {hintSilent "Ear Plugs 60%"; 1 fadeSound 0.4; player setVariable ["Earplugs", 40];
			 	};
				case 40: {hintSilent "Ear Plugs 30%"; 1 fadeSound 0.7; player setVariable ["Earplugs", 70];
			 	};
				case 70: {hintSilent "Ear Plugs Removed"; 1 fadeSound 1; player setVariable ["Earplugs", 0];
			 	};
			};
		};
	};


	case 24:
	{
		if (!_shift && !_alt && !_ctrlKey && (playerSide isEqualTo west) && (vehicle player != player)) then {
		[] call life_fnc_copOpener;
		};
	};
	//Map Key
	case _mapKey: {
		switch (playerSide) do {
			case west: {if(!visibleMap) then {[] spawn life_fnc_copMarkers;}};
			case independent: {if(!visibleMap) then {[] spawn life_fnc_medicMarkers;}};
			case civilian: {if(!visibleMap) then {[] spawn life_fnc_civMarkers;}};
		};
	};
    //EMP Konsole - End
    case 207:
    {
        if (!_shift && !_alt && !_ctrlKey && (playerSide isEqualTo west) && (vehicle player != player && (typeOf vehicle player) in ["B_Heli_Transport_01_F","I_Heli_light_03_unarmed_F","O_Heli_Light_02_unarmed_F"])) then
        {
            [] call life_fnc_openEmpMenu; [_this] call life_fnc_isEmpOperator;
        };
    };
	//Holster / recall weapon. (Shift + H)
	case 35: {
		if(_shift && !_ctrlKey && !(EQUAL(currentWeapon player,""))) then {
			life_curWep_h = currentWeapon player;
			player action ["SwitchWeapon", player, player, 100];
			player switchCamera cameraView;
			[] call life_fnc_playerSkins;
		};

		if(!_shift && _ctrlKey && !isNil "life_curWep_h" && {!(EQUAL(life_curWep_h,""))}) then {
			if(life_curWep_h in [RIFLE,LAUNCHER,PISTOL]) then {
				player selectWeapon life_curWep_h;
			};
		};
	};

	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	case _interactionKey: {
		if(!life_action_inUse) then {
			[] spawn  {
				private "_handle";
				_handle = [] spawn life_fnc_actionKeyHandler;
				waitUntil {scriptDone _handle};
				life_action_inUse = false;
				[] call life_fnc_playerSkins;
			};
		};
	};

	case 15:
	{
		cutText [format["Oh shit waddup!"], "PLAIN DOWN"];
		player playActionNow "gestureHi";
	};

	//Restraining (Shift + R)
case 19: {
	if(_shift) then {_handled = true;};
	if(_shift && playerSide isEqualTo west && {!isNull cursorObject} && {cursorObject isKindOf "Man"} && {(isPlayer cursorObject)} && {(side cursorObject in [west,civilian,independent])} && {alive cursorObject} && {cursorObject distance player < 4} && {!(cursorObject GVAR "Escorting")} && {!(cursorObject GVAR "restrained")} && {speed cursorObject < 1}) then
	{
		[] call life_fnc_restrainAction;
	};
	//Robbing
		if(_shift && playerSide == civilian && (animationState cursorTarget) == "Incapacitated" && {!isNull cursorTarget} && {cursorTarget isKindOf "Man"} && {(isPlayer cursorTarget)} && {(side cursorTarget in [civilian,independent])} && {alive cursorTarget} && {cursorTarget distance player < 3.5} && {!(cursorTarget GVAR "Escorting")} && {!(cursorTarget GVAR "restrained")} && {speed cursorTarget < 1}) then {
			[] call life_fnc_ZipTieAction;
		};
	};

	//Knock out, this is experimental and yeah... (Shift + G)
	case 34: {
		if(_shift) then {_handled = true;};
		if (safezone) exitWith {
			hint "You cannot knock out within a safezone!";
		};
		if(_shift && playerSide isEqualTo civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" && isPlayer cursorTarget && alive cursorTarget && cursorTarget distance player < 4 && speed cursorTarget < 1) then {
			if((animationState cursorTarget) != "Incapacitated" && (currentWeapon player == primaryWeapon player OR currentWeapon player == handgunWeapon player) && currentWeapon player != "" && !life_knockout && !(player GVAR ["restrained",false]) && !life_istazed && !life_isknocked) then {
				[cursorTarget] spawn life_fnc_knockoutAction;
			};
		};
	};

	//T Key (Trunk)
	case 20: {
		if(!_alt && !_ctrlKey && !dialog && {!life_action_inUse}) then {
			if(vehicle player != player && alive vehicle player) then {
				if((vehicle player) in life_vehicles) then {
					[vehicle player] spawn life_fnc_openInventory;
				};
			} else {
				private "_list";
				_list = ((ASLtoATL (getPosASL player)) nearEntities [["Box_IND_Grenades_F","B_supplyCrate_F"], 2.5]) select 0;
				if (!(isNil "_list")) then {
					_house = nearestObject [(ASLtoATL (getPosASL _list)), "House"];
					if (_house getVariable ["locked", false]) then {
						hint localize "STR_House_ContainerDeny";
					} else {
						[_list] spawn life_fnc_openInventory;
					};
				} else {
					_list = ["landVehicle","Air","Ship"];
					if(KINDOF_ARRAY(cursorTarget,_list) && {player distance cursorTarget < 7} && {isNull objectParent player} && {alive cursorTarget} && {!life_action_inUse}) then {
						if(cursorTarget in life_vehicles) then {
							[cursorTarget] spawn life_fnc_openInventory;
						};
					};
				};
			};
		};
	};

	//L Key?
	case 38: {
		//If cop run checks for turning lights on.
		if(_shift && playerSide in [west,independent]) then {
			if(vehicle player != player && (typeOf vehicle player) in ["C_Offroad_01_F","B_MRAP_01_F","C_SUV_01_F","C_Hatchback_01_sport_F","B_Heli_Light_01_F","B_Heli_Transport_01_F"]) then {
				if(!isNil {vehicle player GVAR "lights"}) then {
					if(playerSide isEqualTo west) then {
						[vehicle player] call life_fnc_sirenLights;
					} else {
						[vehicle player] call life_fnc_medicSirenLights;
					};
					_handled = true;
				};
			};
		};

		if(!_alt && !_ctrlKey) then { [] call life_fnc_radar; };
	};

	case 49:
	{
		if(_shift) then {_handled = true;};
	    if (_shift) then { [] spawn life_fnc_activateNitro;};
	};

	//Y Player Menu
	case 21: {
		if(!_alt && !_ctrlKey && !dialog && !(player GVAR ["restrained",false]) && {!life_action_inUse}) then {
			if(!_shift) then {
				[] call life_fnc_p_openMenu;
			};
		};
	};

	//F Key
	case 33: {
		if(playerSide in [west,independent] && {vehicle player != player} && {!life_siren_active} && {((driver vehicle player) == player)}) then {
			[] spawn {
				life_siren_active = true;
				sleep 4.7;
				life_siren_active = false;
			};

			_veh = vehicle player;
			if(isNil {_veh GVAR "siren"}) then {_veh SVAR ["siren",false,true];};
			if((_veh GVAR "siren")) then {
				titleText [localize "STR_MISC_SirensOFF","PLAIN"];
				_veh SVAR ["siren",false,true];
			} else {
				titleText [localize "STR_MISC_SirensON","PLAIN"];
				_veh SVAR ["siren",true,true];
				if(playerSide isEqualTo west) then {
					[_veh] remoteExec ["life_fnc_copSiren",RCLIENT];
				} else {
					[_veh] remoteExec ["life_fnc_medicSiren",RCLIENT];
				};
			};
		};
	};

	//O Key
	case 24: {
		if(_shift) then {
			if (soundVolume != 1) then {
				1 fadeSound 1;
				systemChat localize "STR_MISC_soundnormal";
			} else {
				1 fadeSound 0.1;
				systemChat localize "STR_MISC_soundfade";
			};
		};
	};

	//U Key
	case 22: {
		if(!_alt && !_ctrlKey) then {
			if(isNull objectParent player) then {
				_veh = cursorTarget;
			} else {
				_veh = vehicle player;
			};

			if(_veh isKindOf "House_F" && {playerSide isEqualTo civilian}) then {
				if(_veh in life_vehicles && player distance _veh < 8) then {
					_door = [_veh] call life_fnc_nearestDoor;
					if(EQUAL(_door,0)) exitWith {hint localize "STR_House_Door_NotNear"};
					_locked = _veh GVAR [format["bis_disabled_Door_%1",_door],0];

					if(EQUAL(_locked,0)) then {
						_veh SVAR [format["bis_disabled_Door_%1",_door],1,true];
						_veh animate [format["door_%1_rot",_door],0];
						systemChat localize "STR_House_Door_Lock";
					} else {
						_veh SVAR [format["bis_disabled_Door_%1",_door],0,true];
						_veh animate [format["door_%1_rot",_door],1];
						systemChat localize "STR_House_Door_Unlock";
					};
				};
			} else {
				_locked = locked _veh;
				if(_veh in life_vehicles && player distance _veh < 8) then {
					if(EQUAL(_locked,2)) then {
						if(local _veh) then {
							_veh lock 0;

							// BI
							_veh animateDoor ["door_back_R",1];
							_veh animateDoor ["door_back_L",1];
							_veh animateDoor ['door_R',1];
							_veh animateDoor ['door_L',1];
							_veh animateDoor ['Door_L_source',1];
							_veh animateDoor ['Door_rear',1];
							_veh animateDoor ['Door_rear_source',1];
							_veh animateDoor ['Door_1_source',1];
							_veh animateDoor ['Door_2_source',1];
							_veh animateDoor ['Door_3_source',1];
							_veh animateDoor ['Door_LM',1];
							_veh animateDoor ['Door_RM',1];
							_veh animateDoor ['Door_LF',1];
							_veh animateDoor ['Door_RF',1];
							_veh animateDoor ['Door_LB',1];
							_veh animateDoor ['Door_RB',1];
							_veh animateDoor ['DoorL_Front_Open',1];
							_veh animateDoor ['DoorR_Front_Open',1];
							_veh animateDoor ['DoorL_Back_Open',1];
							_veh animateDoor ['DoorR_Back_Open ',1];
						} else {
							[_veh,0] remoteExecCall ["life_fnc_lockVehicle",_veh];

							_veh animateDoor ["door_back_R",1];
							_veh animateDoor ["door_back_L",1];
							_veh animateDoor ['door_R',1];
							_veh animateDoor ['door_L',1];
							_veh animateDoor ['Door_L_source',1];
							_veh animateDoor ['Door_rear',1];
							_veh animateDoor ['Door_rear_source',1];
							_veh animateDoor ['Door_1_source',1];
							_veh animateDoor ['Door_2_source',1];
							_veh animateDoor ['Door_3_source',1];
							_veh animateDoor ['Door_LM',1];
							_veh animateDoor ['Door_RM',1];
							_veh animateDoor ['Door_LF',1];
							_veh animateDoor ['Door_RF',1];
							_veh animateDoor ['Door_LB',1];
							_veh animateDoor ['Door_RB',1];
							_veh animateDoor ['DoorL_Front_Open',1];
							_veh animateDoor ['DoorR_Front_Open',1];
							_veh animateDoor ['DoorL_Back_Open',1];
							_veh animateDoor ['DoorR_Back_Open ',1];
						};
						systemChat localize "STR_MISC_VehUnlock";
						[_veh,"UnlockCarSound"] remoteExec ["life_fnc_say3D",RANY];
					} else {
						if(local _veh) then {
							_veh lock 2;

							_veh animateDoor ["door_back_R",0];
							_veh animateDoor ["door_back_L",0];
							_veh animateDoor ['door_R',0];
							_veh animateDoor ['door_L',0];
							_veh animateDoor ['Door_L_source',0];
							_veh animateDoor ['Door_rear',0];
							_veh animateDoor ['Door_rear_source',0];
							_veh animateDoor ['Door_1_source',0];
							_veh animateDoor ['Door_2_source',0];
							_veh animateDoor ['Door_3_source',0];
							_veh animateDoor ['Door_LM',0];
							_veh animateDoor ['Door_RM',0];
							_veh animateDoor ['Door_LF',0];
							_veh animateDoor ['Door_RF',0];
							_veh animateDoor ['Door_LB',0];
							_veh animateDoor ['Door_RB',0];
							_veh animateDoor ['DoorL_Front_Open',0];
							_veh animateDoor ['DoorR_Front_Open',0];
							_veh animateDoor ['DoorL_Back_Open',0];
							_veh animateDoor ['DoorR_Back_Open ',0];
						} else {
							[_veh,2] remoteExecCall ["life_fnc_lockVehicle",_veh];

							_veh animateDoor ["door_back_R",0];
							_veh animateDoor ["door_back_L",0];
							_veh animateDoor ['door_R',0];
							_veh animateDoor ['door_L',0];
							_veh animateDoor ['Door_L_source',0];
							_veh animateDoor ['Door_rear',0];
							_veh animateDoor ['Door_rear_source',0];
							_veh animateDoor ['Door_1_source',0];
							_veh animateDoor ['Door_2_source',0];
							_veh animateDoor ['Door_3_source',0];
							_veh animateDoor ['Door_LM',0];
							_veh animateDoor ['Door_RM',0];
							_veh animateDoor ['Door_LF',0];
							_veh animateDoor ['Door_RF',0];
							_veh animateDoor ['Door_LB',0];
							_veh animateDoor ['Door_RB',0];
							_veh animateDoor ['DoorL_Front_Open',0];
							_veh animateDoor ['DoorR_Front_Open',0];
							_veh animateDoor ['DoorL_Back_Open',0];
							_veh animateDoor ['DoorR_Back_Open ',0];
						};
						systemChat localize "STR_MISC_VehLock";
						[_veh,"LockCarSound"] remoteExec ["life_fnc_say3D",RANY];
					};
				};
			};
		};
	};
};

if (life_barrier_active) then {
    switch (_code) do
    {
        case 57: //space key
        {
            [] spawn life_fnc_placeablesPlaceComplete;
        };
    };
    true;
};
_handled;