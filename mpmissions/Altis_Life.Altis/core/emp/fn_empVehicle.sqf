/*
	File: empVehicles.sqf
	Author: � 2014 nano2K - written for we-are-friendly.de
*/
private["_index","_vehicle"];
disableSerialization;
if(!isNull (findDisplay 3494)) then {
	if(nn_empInUse) exitWith { hintSilent "Pojazd mechaniczny albo bateria musi być załadowywana"; };
	nn_empInUse = true;
	_index = lbCurSel (2902);
	_vehicle = nn_last_vehicles select _index;
	if(isNull _vehicle) exitWith {};
	(vehicle player) say3D "empacsound";
[_vehicle] remoteExec ["life_fnc_vehicleEmpd",crew _vehicle];
	uiSleep (3 * 60);
	nn_empInUse = false;
};
