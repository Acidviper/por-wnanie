private ["_eh1","_inArea","_zone1","_zone2","_zone3","_zone4","_zone5","_zone1dis","_zone2dis","_zone3dis","_zone4dis","_zone5dis","_dis"];

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
_inArea = false;

_enterText = "Wchodzisz do safezone!";
_leaveText = "Opuszczasz safezone!";

switch (playerSide) do
{
	case west:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone5dis)) && (!_inArea)) then
				{
					_inArea = true;
					hint parseText format["<t color='#00ff00'><t size='2'><t align='center'>Wchodzisz do SAFEZONE<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_enterText];
					player allowDamage false;
					safezone = true;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) && (_zone5 distance player < _zone5dis)) && (_inArea)) then
				{
					_inArea = false;
					hint parseText format["<t color='#ffff00'><t size='2'><t align='center'>Opuszczasz SAFE ZONE<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_leaveText];
					player allowDamage true;
					safezone = false;
				};

			};
		};
	};

	case civilian:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone5dis)) && (!_inArea)) then
				{
					_eh1 = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
					_inArea = true;
					hint parseText format["<t color='#00ff00'><t size='2'><t align='center'>Wchodzisz do SAFEZONE<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_enterText];
					player allowDamage false;
					safezone = true;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) &&(_zone5 distance player > _zone5dis)) && (_inArea)) then
				{
					player removeEventHandler ["fired", _eh1];
					_inArea = false;
					hint parseText format["<t color='#ffff00'><t size='2'><t align='center'>Opuszczasz SAFE ZONE<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_leaveText];
					player allowDamage true;
					safezone = false;
				};

			};
		};
	};

	case independent:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone5dis)) && (!_inArea)) then
				{
					_inArea = true;
					hint parseText format["<t color='#00ff00'><t size='2'><t align='center'>Wchodzisz do SAFEZONE<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_enterText];
					player allowDamage false;
					safezone = true;
					imAuto = false;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) && (_zone5 distance player > _zone5dis)) && (_inArea)) then
				{
					_inArea = false;
					hint parseText format["<t color='#ffff00'><t size='2'><t align='center'>Opuszczasz SAFE ZONE<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_leaveText];
					player allowDamage true;
					safezone = false;
					imAuto = true;
				};

			};
		};
	};
	sleep 3;
};
