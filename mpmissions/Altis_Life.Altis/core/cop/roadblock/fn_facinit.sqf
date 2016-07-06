#include <macro.h>
/*
 Author: Fuzz
 Description: Choix de des factions soit medic ou policier.
*/
if(playerSide isEqualTo civilian) exitWith {hint "You must be EMS or Police to make roadblocks"};

if(playerSide isEqualTo west) then
{
	[] spawn life_fnc_placeablesMenu;
};
