private ["_start"];
_start = [_this,0,0,[0]] call BIS_fnc_param;

//InfoMenus
if(_start isEqualTo 0) exitWith {
disableSerialization;
createDialog "infoMenu";
switch(playerSide) do {case west:{ctrlShow[2011,false];ctrlShow[2016,false];};case independent:{ctrlShow[2011,false];ctrlShow[2016,false];};};

_InfoMenus = ((findDisplay 41500) displayCtrl 2300);
lbClear _InfoMenus;

_InfoMenus lbAdd "Geral";lbSetColor[2300,(lbSize _InfoMenus)-1,[1,0.694,0.141,1]];
_InfoMenus lbAdd "Informaçoes do servidor"; lbSetValue [2300, (lbSize _InfoMenus)-1, 1];
_InfoMenus lbAdd "Regras"; lbSetValue [2300, (lbSize _InfoMenus)-1, 2];
_InfoMenus lbAdd "Controles"; lbSetValue [2300, (lbSize _InfoMenus)-1, 3];
_InfoMenus lbAdd "Preço dos farms"; lbSetValue [2300, (lbSize _InfoMenus)-1, 4];
_InfoMenus lbAdd "Iniciando"; lbSetValue [2300, (lbSize _InfoMenus)-1, 5];
_InfoMenus lbAdd "Log"; lbSetValue [2300, (lbSize _InfoMenus)-1, 6];lbSetColor[2300,(lbSize _InfoMenus)-1,[1,0,0.082,1]];

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
"Undead Brasil Atlis Life Server<br/>
<t color='#0099ff'>Nome:</t> [BR] Altis Life Undead Brasil Servidores<br/>
<t color='#0099ff'>IP:</t>149.56.189.188<br/>
<t color='#0099ff'>Porta:</t>2302<br/><br/>
<t color='#0099ff'>Links diretos</t><br/>
<a href='ts3server://ts3.undeadbrasil.com/?port=9987&nickname=UndeadBrasil'>Teamspeak 3: ts3.undeadbrasil.com</a><br/>
<a href='http://www.undeadbrasil.com/forum/'>Forum: undeadbrasil.com/forum</a><br/><br/>
Restart<br/>
<t color='#0099ff'>0:00, 3:00, 6:00, 9:00, 12:00</t>
";
};

//Regeln
if(_index isEqualTo 2) exitWith {"Nossas regras completas estão disponíveis no nosso forum. Para ir directamente para as regras<br/><a color='#0099ff' href='http://www.undeadbrasil.com/forum/index.php?/forum/4-nossos-servidores/'>Click Aqui</a>"};

//Steuerung
if(_index isEqualTo 3) exitWith {
"<t color='#0099ff'>Y</t> Player Menu<br/>
<t color='#0099ff'>U</t> Desbloquear e abrir casas e veiculos <br/>
<t color='#0099ff'>T</t> Invetário virutal do carro <br/>
<t color='#0099ff'>TAB</t> Comprimentar <br/>
<t color='#0099ff'>Bandeira do windows</t> Menu de Interação básica <br/>
<t color='#0099ff'>Shift+G</t> Nocautear o jogador <br/>
<t color='#0099ff'>Shift+Insert</t> Diminuir som <br/>
<t color='#0099ff'>Shift+B</t> Colocar mao na cabeça <br/>
<t color='#0099ff'>Shift+R</t> Algemar o Jogador  <se tiver algemas>" ;

};

//Lizensen
if(_index isEqualTo 4) exitWith {
"<t color='#00ff00'>Farms Legais:</t><br/>
<t color='#00ff00'>Petróleo</t> 2500 <br/>
<t color='#00ff00'>Cobre</t> 1150 <br/>
<t color='#00ff00'>Ferro</t> 1000 <br/>
<t color='#00ff00'>Sal</t> 1075 <br/>
<t color='#00ff00'>Vidro</t> 1045 <br/>
<t color='#00ff00'>Diamante bruto</t> 1000 <br/>
<t color='#00ff00'>Tabuas de madeira</t> 2000 <br/>
<t color='#00ff00'>Borracha nao processada</t> 50 <br/>
<t color='#00ff00'>Borracha</t> 1400 <br/>
<t color='#00ff00'>Moeda antiga</t> 1800 <br/>
<t color='#00ff00'>Lã</t> 800 <br/>
<t color='#00ff00'>Pano</t> 1400 <br/>
<t color='#00ff00'>Aço</t> 800 <br/>
<t color='#00ff00'>Barra de aço</t> 1800 <br/>
<t color='#00ff00'>Enxofre</t> 1100 <br/>
<t color='#00ff00'>Cimento</t> 2000 <br/>
<t color='#FF0000'>Farms ILegais:</t><br/>
<t color='#FF0000'>Heroina</t> 3100 <br/>
<t color='#FF0000'>Maconha</t> 3800 <br/>
<t color='#FF0000'>Cocaina</t> 4200 <br/>
<t color='#FF0000'>Krokodilo</t> 1100" ;
};

if(_index isEqualTo 5) exitWith {
"Bem-vindo ao Undead Brasil, Ganhar dinheiro deve ser relativamente fácil.<br/><br/>
- Você vai começar com 75 mil, por isso, a compra de veículos básicos, a engrenagem, etc é muito fácil de fazer em primeiro lugar<br/>
- Abra o seu mapa para ver que tipos de postos de trabalho e métodos de fazer dinheiro que você pode tirar vantagem de<br/>
- Use o cinto de segurança quando estiver dirigindo, ao contrário , quando bater ira se machucar muito mais!<br/>
- Sua posiçao, vida, fome e sede todos salvam ao relogar/restartar<br/>
- Quando um alarme policial for chamado em Kavala ou outras cidades, nao fique na rua voce estará correndo risco de morte.<br/>
- A polícia nao tem obrigaçao de dar carona ou reparar carros de civís, eles nao sao Taxi nem engenheiros
";
};

if(_index isEqualTo 6) exitWith {
"<t size='1.2px' align='center' color='#0099ff'>Reporte bugs e tenha recompensa</t><br/>
<t align='center' color='#0099ff'>Isso melhora o roleplay para todos</t><br/><br/>

<t align='center'><t size='1.7px' align='center' color='#FF0000'>Sistemas</t><br/>
Jogos de azar<br/>
Saco de sequestro<br/>
Rastreador<br/>
Alcoolismo<br/>
Após chamar medico tempo de spawn aumenta<br/>
Alarme de carro, sons ao comer, beber e reparar carro<br/>
Sistema de Vips e guangues Vips<br/>
Optimizaçao geral<br/><br/>

<t align='center'><t size='1.7px' align='center' color='#FF0000'>Sugestões</t><br/>
Nós demos ouvidos as seguestões seja criativo e nao impossivel , use nosso teamspeak para dar suas sugestões.";
};

};

//Add Infos
((findDisplay 41500) displayCtrl 2304) ctrlSetStructuredText parseText ("<t size='0.8'>" + _infoText);
};
[] spawn life_fnc_InfoMenu;
