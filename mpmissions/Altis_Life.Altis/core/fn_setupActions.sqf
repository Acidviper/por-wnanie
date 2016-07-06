/*
	File: fn_setupActions.sqf
	Author:

	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
	case civilian: {
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable["robbed",FALSE]) ']];
		// Suicide Bomb
			life_actions = life_actions + [player addAction["<t color='#FF0000'>Wysadż się</t>",life_fnc_suicideBomb,"",0,false,true,"",
			'vest player isEqualTo "V_HarnessOGL_brn" && alive player && playerSide isEqualTo civilian && !life_istazed && !life_isSuicide && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];
			//dokument
		     life_actions = life_actions + [player addAction["Pokaż dokument",life_fnc_Lizenzzeigen,"",1,false,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man"']];
		 	};
	case west:
		{
			life_actions = life_actions + [player addAction["<t color='#BBBB00'>Seize Objects On Ground</t>",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'(count(nearestObjects [player,["weaponholder"],3])>0)']];
			//CopEnter - Driver Seat
			life_actions = life_actions + [player addAction[localize "STR_pAct_DriverSeat",life_fnc_copEnter,"driver",200,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];
			//CopEnter - Passenger Seat
			life_actions = life_actions + [player addAction[localize "STR_pAct_PassengerSeat",life_fnc_copEnter,"passenger",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];
			//CopEnter - Gunner Seat
			life_actions = life_actions + [player addAction[localize "STR_pAct_GunnerSeat",life_fnc_copEnter,"gunner",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];
			//CopEnter - Exit
			life_actions = life_actions + [player addAction[localize "STR_pAct_GoOut",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']];
		    //dokument
		    life_actions = life_actions + [player addAction["Pokaż odznakę",life_fnc_Lizenzzeigen,"",1,false,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man"']];
	    	// nano EMP Little Bird
			life_actions = life_actions + [player addAction["<t color='#FF0000'>EMP konsola</t>",life_fnc_openEmpMenu,[],8,false,false,"",'[_this] call life_fnc_isEmpOperator']];
			};

if (playerSide == independent) then {
	//CopEnter - Driver Seat
			life_actions = life_actions + [player addAction[localize "STR_pAct_DriverSeat",life_fnc_copEnter,"driver",200,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];
			//CopEnter - Passenger Seat
			life_actions = life_actions + [player addAction[localize "STR_pAct_PassengerSeat",life_fnc_copEnter,"passenger",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];
             //CopEnter - Exit
			life_actions = life_actions + [player addAction[localize "STR_pAct_GoOut",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']];			
	//dokument  
	        life_actions = life_actions + [player addAction["Pokaż dokument",life_fnc_Lizenzzeigen,"",1,false,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man"']];
      
};
};
//life_actions pushBack (player addAction ["<img image='icons\seatOn.paa' /><t color='#BBBB00'>Pasy On</t>", {life_imAuto = false;}, "", 3, true, true, "", 'vehicle player isKindOf "Car" && !life_imAuto']);
//life_actions pushBack (player addAction ["<img image='icons\seatOff.paa' /><t color='#BBBB00'>Pasy Off</t>", {life_imAuto = true;}, "", 3, true, true, "", 'vehicle player isKindOf "Car" && life_imAuto']);
//remove mask
//life_actions = life_actions + [player addAction["<t color='#FFB124'>Zdejmij worek</t>",life_fnc_unmask,"",1,false,true,"",' playerSide isEqualTo west OR playerSide isEqualTo civilian && !isNull cursorTarget && cursorTarget getVariable "masked" && player distance cursorTarget < 3 && cursorTarget isKindOf "Man" ']];
//pasy
	  life_actions pushBack (player addAction ["<img image='icons\seatOn.paa' /><t color='#BBBB00'>Zapnij pas</t>", {life_seatbelt=true}, "", 7, false, false, "", 'vehicle player isKindOf "Car" && !life_seatbelt']);
      life_actions pushBack (player addAction ["<img image='icons\seatOff.paa' /><t color='#BBBB00'>Odepnij pas</t>", {life_seatbelt=false}, "", 7, false, false, "", 'vehicle player isKindOf "Car" && life_seatbelt']);