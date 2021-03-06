#include "..\..\script_macros.hpp"
/*
	File: fn_vehicleShopLBChange.sqf
	Author: Bryan "Tonic" Boardwine
	Modified : NiiRoZz

	Description:
	Called when a new selection is made in the list box and
	displays various bits of information about the vehicle.
*/
disableSerialization;
private["_control","_index","_className","_classNameLife","_initalPrice","_buyMultiplier","_rentMultiplier","_vehicleInfo","_colorArray","_ctrl","_trunkSpace","_maxspeed","_horsepower","_passengerseats","_fuel","_armor"];
_control = _this select 0;
_index = _this select 1;

//Fetch some information.
_className = _control lbData _index;
_classNameLife = _className;
_vIndex = _control lbValue _index;

_initalPrice = M_CONFIG(getNumber,CONFIG_LIFE_VEHICLES,_classNameLife,"price");

switch(playerSide) do {
	case civilian: {
	
	/* NORMAL */
	if ((FETCH_CONST(life_donorlevel) == 0)) then 
	{
				_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_CIVILIAN");
				_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_CIVILIAN");
	};
	/* BRONZE */
	if ((FETCH_CONST(life_donorlevel) == 1)) then 
	{
				_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_DONATOR_BRONZE");
				_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_DONATOR_BRONZE");
		}else{
				_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_CIVILIAN");
				_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_CIVILIAN");
	};
	/* SILVER */
	if ((FETCH_CONST(life_donorlevel) == 2)) then 
	{
				_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_DONATOR_SILVER");
				_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_DONATOR_SILVER");
		}else{
				_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_CIVILIAN");
				_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_CIVILIAN");
	};
	/* GOLD */
	if ((FETCH_CONST(life_donorlevel) == 3)) then 
	{
				_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_DONATOR_GOLD");
				_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_DONATOR_GOLD");
		}else{
				_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_CIVILIAN");
				_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_CIVILIAN");
	};
	/* PLATINUM */
	if ((FETCH_CONST(life_donorlevel) == 4)) then 
	{
				_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_DONATOR_PLATINUM");
				_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_DONATOR_PLATINUM");
		}else{
				_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_CIVILIAN");
				_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_CIVILIAN");
	};
	/* DIAMANTE */
	if ((FETCH_CONST(life_donorlevel) == 5)) then 
	{
				_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_DONATOR_DIAMANTE");
				_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_DONATOR_DIAMANTE");
		}else{
				_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_CIVILIAN");
				_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_CIVILIAN");
	};
	};
	case west: {
		_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_COP");
		_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_COP");
	};
	case independent: {
		_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_MEDIC");
		_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_MEDIC");
	};
	case east: {
		_buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_OPFOR");
		_rentMultiplier = LIFE_SETTINGS(getNumber,"vehicle_rental_multiplier_OPFOR");
	};
};

_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
_trunkSpace = [_className] call life_fnc_vehicleWeightCfg;
_maxspeed = _vehicleInfo select 8;
_horsepower = _vehicleInfo select 11;
_passengerseats = _vehicleInfo select 10;
_fuel = _vehicleInfo select 12;
_armor = _vehicleInfo select 9;
[_className] call life_fnc_vehicleShop3DPreview;

ctrlShow [2330,true];
(CONTROL(2300,2303)) ctrlSetStructuredText parseText format[
	(localize "STR_Shop_Veh_UI_Rental")+ " <t color='#8cff9b'>$%1</t><br/>" +
	(localize "STR_Shop_Veh_UI_Ownership")+ " <t color='#8cff9b'>$%2</t><br/>" +
	(localize "STR_Shop_Veh_UI_MaxSpeed")+ " %3 km/h<br/>" +
	(localize "STR_Shop_Veh_UI_HPower")+ " %4<br/>" +
	(localize "STR_Shop_Veh_UI_PSeats")+ " %5<br/>" +
	(localize "STR_Shop_Veh_UI_Trunk")+ " %6<br/>" +
	(localize "STR_Shop_Veh_UI_Fuel")+ " %7<br/>" +
	(localize "STR_Shop_Veh_UI_Armor")+ " %8",
	[round(_initalPrice * _rentMultiplier)] call life_fnc_numberText,
	[round(_initalPrice * _buyMultiplier)] call life_fnc_numberText,
	_maxspeed,
	_horsepower,
	_passengerseats,
	if(_trunkSpace isEqualTo -1) then {"None"} else {_trunkSpace},
	_fuel,
	_armor
];

_ctrl = CONTROL(2300,2304);
lbClear _ctrl;

if(!isClass (missionConfigFile >> CONFIG_LIFE_VEHICLES >> _classNameLife)) then {
	_classNameLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_className];
};
_colorArray = M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_classNameLife,"textures");

{
	_flag = SEL(_x,1);
	_textureName = SEL(_x,0);
	if(EQUAL(SEL(life_veh_shop,2),_flag)) then {
		_ctrl lbAdd _textureName;
		_ctrl lbSetValue [(lbSize _ctrl)-1,_forEachIndex];
	};
} forEach _colorArray;

_numberindexcolor = 0;
_numberindexcolorarray = [];

for "_i" from 0 to (count(_colorArray) - 1) do {
	_numberindexcolorarray pushBack _numberindexcolor;
	_numberindexcolor = _numberindexcolor + 1;
};

_indexrandom = _numberindexcolorarray call BIS_fnc_selectRandom;
_ctrl lbSetCurSel _indexrandom;

if(_className in (LIFE_SETTINGS(getArray,"vehicleShop_rentalOnly"))) then {
	ctrlEnable [2309,false];
} else {
	if(!(life_veh_shop select 3)) then {
		ctrlEnable [2309,true];
	};
};

if((lbSize _ctrl)-1 != -1) then {
	ctrlShow[2304,true];
} else {
	ctrlShow[2304,false];
};

true;