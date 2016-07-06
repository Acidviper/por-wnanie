private ["_start"];
_start = [_this,0,0,[0]] call BIS_fnc_param;

//InfoMenus
if(_start isEqualTo 0) exitWith {
disableSerialization;
createDialog "infoMenu";
switch(playerSide) do {case west:{ctrlShow[2011,false];ctrlShow[2016,false];};case independent:{ctrlShow[2011,false];ctrlShow[2016,false];};};

_InfoMenus = ((findDisplay 41500) displayCtrl 2300);
lbClear _InfoMenus;

_InfoMenus lbAdd "Zasady";lbSetColor[2300,(lbSize _InfoMenus)-1,[1,0.694,0.141,1]];
_InfoMenus lbAdd "Info"; lbSetValue [2300, (lbSize _InfoMenus)-1, 1];
_InfoMenus lbAdd "Admini"; lbSetValue [2300, (lbSize _InfoMenus)-1, 2];
_InfoMenus lbAdd "Klawisze"; lbSetValue [2300, (lbSize _InfoMenus)-1, 3];
_InfoMenus lbAdd "Cennik"; lbSetValue [2300, (lbSize _InfoMenus)-1, 4];
_InfoMenus lbAdd "Praca"; lbSetValue [2300, (lbSize _InfoMenus)-1, 5];
_InfoMenus lbAdd "Zmiany"; lbSetValue [2300, (lbSize _InfoMenus)-1, 6];lbSetColor[2300,(lbSize _InfoMenus)-1,[1,0,0.082,1]];

_InfoMenus lbSetCurSel 1;
};

//Infos
if(_start isEqualTo 1) exitWith {
private ["_index","_infoText"];
_index = ((findDisplay 41500) displayCtrl 2300) lbValue (lbCurSel 2300);
((findDisplay 41500) displayCtrl 2301) ctrlSetText lbText [2300, lbCurSel 2300];

if(_index isEqualTo 0) exitWith {};


_infoText = call {
//Server
if(_index isEqualTo 1) exitWith {
"AltisLand Best Server<br/>
<t color='#0099ff'>Nome:</t> [PL] Altisland BEST<br/>
<t color='#0099ff'>IP:</t> 149.202.65.190<br/>
<t color='#0099ff'>Port:</t>2352<br/><br/>
<t color='#0099ff'>Linki</t><br/>
<a href=''>Teamspeak 3: 51.254.132.75</a><br/>
<a href='http://www.altisland.pl'>Forum: altisland.pl</a><br/><br/>
Restart<br/>
<t color='#0099ff'>0:00, 3:00, 6:00, 9:00, 12:00</t>
";
};

//Regeln
if(_index isEqualTo 2) exitWith {"Admini Acid, Castel<br/><a color='#0099ff' href='www.altisland.pl'>Wejdż na forum</a>"};

//Steuerung
if(_index isEqualTo 3) exitWith {
"<t color='#0099ff'>Y</t> Player Menu<br/>
<t color='#0099ff'>U</t> Otwieranie zamykanie pojazdów <br/>
<t color='#0099ff'>T</t> Bagażnik <br/>
<t color='#0099ff'>TAB</t> Rozmowa <br/>
<t color='#0099ff'>Windows</t> Menu interakcji <br/>
<t color='#0099ff'>Shift+G</t> Powalenie gracza <br/>
<t color='#0099ff'>Shift+Insert</t> Zatyczki do uszów <br/>
<t color='#0099ff'>Shift+B</t> Poddanie się <br/>
<t color='#0099ff'>Shift+R</t> Kajdanki>" ;

};

//Lizensen
if(_index isEqualTo 4) exitWith {
"<t color='#00ff00'>Legalne prace:</t><br/>
<t color='#00ff00'>Olej</t> 2500 <br/>
<t color='#00ff00'>Miedź</t> 1150 <br/>
<t color='#00ff00'>Stal</t> 1000 <br/>
<t color='#00ff00'>Sól</t> 1075 <br/>
<t color='#00ff00'>Szkło</t> 1045 <br/>
<t color='#00ff00'>Nieoszlifowany diament</t> 1000 <br/>
<t color='#00ff00'>Deski</t> 2000 <br/>
<t color='#00ff00'>Nieprzetworzona guma</t> 50 <br/>
<t color='#00ff00'>Guma</t> 1400 <br/>
<t color='#00ff00'>Starożytne monety</t> 1800 <br/>
<t color='#00ff00'>Wełna</t> 800 <br/>
<t color='#00ff00'>Materiał</t> 1400 <br/>
<t color='#00ff00'>Stal</t> 800 <br/>
<t color='#00ff00'>Przetworzona stal</t> 1800 <br/>
<t color='#00ff00'>Siarka</t> 1100 <br/>
<t color='#00ff00'>Cement</t> 2000 <br/>
<t color='#FF0000'>Nielegalne prace:</t><br/>
<t color='#FF0000'>Heroina</t> 3100 <br/>
<t color='#FF0000'>Marichuana</t> 3800 <br/>
<t color='#FF0000'>Cocaina</t> 4200 <br/>
<t color='#FF0000'>Doplacz</t> 1100" ;
};

if(_index isEqualTo 5) exitWith {
"Szukasz pracy policjanta medyka zapraszamy na ts
";
};

if(_index isEqualTo 6) exitWith {
"<t size='1.2px' align='center' color='#0099ff'>Życzymy miłej zabawy</t><br/>
<t align='center' color='#0099ff'>Graj zgodnie z regulaminem</t><br/><br/>

<t align='center'><t size='1.7px' align='center' color='#FF0000'>Podziękowania dla</t><br/>
gżegżolka<br/><br/>

<t align='center'><t size='1.7px' align='center' color='#FF0000'>Sugestie</t><br/>
Masz jakieś pomysły zapraszamy na TS i forum.";
};

};

//Add Infos
((findDisplay 41500) displayCtrl 2304) ctrlSetStructuredText parseText ("<t size='0.8'>" + _infoText);
};
[] spawn life_fnc_InfoMenu;
