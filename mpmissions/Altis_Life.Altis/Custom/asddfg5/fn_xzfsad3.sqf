/*
	File: fn_safezones.sqf
	Editor: Cris

	Description: kein Kravalla in Kavalla :)
*/
private ["_eh1","_inArea","_zone1","_zone2","_zone3","_zone4","_zone5","_zone1dis","_zone2dis","_zone3dis","_zone4dis","_zone5dis","_dis"];

_obj = _this select 0;

_zone1 = getMarkerPos "safezone_kav"; // MARKERS FOR SAFEZONE
_zone2 = getMarkerPos "safezone_ath";
_zone3 = getMarkerPos "safezone_sof";
_zone4 = getMarkerPos "safezone_pygros";
_zone5 = getMarkerPos "safezone_vip";

_zone1dis = 125;
_zone2dis = 70;
_zone3dis = 110;
_zone4dis = 150;
_zone5dis = 125;

_dis = 350;

_ret = false;

if (((_zone1 distance _obj < _zone1dis) || (_zone2 distance _obj < _zone2dis) || (_zone3 distance _obj < _zone3dis) || (_zone4 distance _obj < _zone4dis) || (_zone5 distance _obj < _zone5dis))) then
{
	// Unit is within distance of one of the specified safezones, return true
	_ret = true;
};
if (((_zone1 distance _obj > _zone1dis) && (_zone2 distance _obj > _zone2dis) && (_zone3 distance _obj > _zone3dis) && (_zone4 distance _obj > _zone4dis) && (_zone5 distance _obj > _zone5dis))) then
{
	// Unit is not within the specified distance to any safezone, return false
	_ret = false;
};


_ret;
