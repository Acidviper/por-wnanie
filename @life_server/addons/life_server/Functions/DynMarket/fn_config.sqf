/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// ███████████████████████████████████████████████████████████████████████
// █████████████████ CONFIGURATION DE BASE DE LA BOURSE ██████████████████
// ███████████████████████████████████████████████████████████████████████

DYNMARKET_Serveruptime         = 06;     // La durée de fonctionnement jusqu'au prochain redémarrage du serveur en heures.
DYNMARKET_UseExternalDatabase  = true;  // Si le script utilise une base de données externe ?
DYNMARKET_PriceUpdateInterval  = 10;     // Après combien de minutes devrait être mis à jour le prix ?
DYNMARKET_CreateBackups        = true;   // Si le serveur ne sauvegarde pas les prix régulièrement dans la base de données, il le fera lorsque le serveur de redémarre ?
DYNMARKET_CreateBackupInterval = 03;     // Après combien de mises à jour de la bourse le serveur devrait-il sauvegarder les prix dans la base de données ?
DYNMARKET_UserNotification     = true;  // Est-ce que les joueurs devraient être informé par un message (hint) à chaque fois que la bourse est mise à jour ?

// █████████████████ TEXTES DE NOTIFICATION  █████████████████

DYNMARKET_UserNotification_Text = 
[
	"Nasze ceny zostały zaktualizowane!",
	"Nowe ceny ...."
];

// █████████████████ CONFIGURATION DU GROUPE D'ARTICLES █████████████████

DYNMARKET_Items_Groups =
[		
	 ["food",
		[    
		    ["aplle",-1,100,200],
			["peach",-1,100,200],
			["salema_raw",-1,100,500],
			["ornate_raw",-1,100,500],
			["mackerel_raw",-1,300,700],
			["tuna_raw",-1,1300,1800],
			["mullet_raw",-1,800,1200]
			],
		0.5
	],
	
	["foods",
		[
			["hen_raw",-1,450,750],
			["rooster_raw",-1,500,900],
			["sheep_raw",-1,900,1700],
			["goat_raw",-1,1300,2500]
			],
		0.5
	],
	
	["Ressources",
		[
			["oil_processed",-1,1500,4000],
			["wood",-1,700,2000],
			["plank",-1,1100,2500],
			["wool",-1,200,1200],
			["steel",-1,1700,3000],
			["steelplate",-1,8200,12500],
			["copper_refined",-1,1000,2200],
			["iron_refined",-1,1250,3250],
			["salt_refined",-1,750,2050],
			["sand",-1,100,300],
			["glass",-1,1000,3000],
			["diamond_cut",-1,3000,7000],
			["rock",-1,200,500],
			["cement",-1,1000,2000]
			],		
		0.5
	],
	
	["Illegal", 
		[
			
			["cocaine_processed",-1,5000,9000],
			["heroin_processed",-1,4500,8500],
			["cannabis",-1,400,600],
			["heba",-1,6000,9000],
			["marijuana",-1,3000,7000]
		],
		0.5
	]
];

// █████████████████    TOUS LES ARTICLES VENDABLE    █████████████████

DYNMARKET_Items_ToTrack        = 
[
	
	
	
	["apple",100],
	["peach",100],
	["salema_raw",310],
	["ornate_raw",300],
	["mackerel_raw",500],
	["tuna_raw",1100],
	["mullet_raw",700],
	["hen_raw",500],
	["rooster_raw",700],
	["sheep_raw",1100],
	["goat_raw",3000],
	
	
	["oil_processed",2500],
	["wood",1100],
	["plank",1600],
	["wool",500],
	["steel",2500],
	["steelplate",10000],
	["copper_refined",1500],
	["salt_refined",1375],
	["iron_refined",2100],
	["sand",200],	
	["glass",2045],
	["diamond_cut",5000],
	["rock",350],	
	["cement",1000],
	
	
		
    ["heroin_processed",6100],
	["cannabis",500],
	["heba",7000],
	["marijuana",4000],
	["cocaine_processed",6200]
	
	
];


//███████████████████████████████████████████████████████████████████████
//██████████████████ NE PAS MODIFIER LE CODE SUIVANT! ██████████████████
//███████████████████████████████████████████████████████████████████████

DYNMARKET_Items_CurrentPriceArr = [];
DYNMARKET_sellarraycopy = DYNMARKET_Items_ToTrack;
DYNMARKET_Serveruptime = (DYNMARKET_Serveruptime * 3600) - 300;
{
	_currentArray = _x;
	DYNMARKET_Items_CurrentPriceArr pushBack [_currentArray select 0,_currentArray select 1,0];
} forEach DYNMARKET_Items_ToTrack;
publicVariable "DYNMARKET_UserNotification";
publicVariable "DYNMARKET_UserNotification_Text";
if (DYNMARKET_UseExternalDatabase) then {[1] call TON_fnc_HandleDB;};
DYNMARKET_UpdateCount = 0;
if (DYNMARKET_UseExternalDatabase) then {
	[] spawn {
		sleep DYNMARKET_Serveruptime;
		diag_log "### DYNMARKET >> LES PRIX ACTUELS SONT EN COURS D'ÉCRITURE DANS LA BASE DE DONNÉES    ###";
		diag_log "### DYNMARKET >> COMME PRÉVU, RÉSULTAT EN ATTENTE ...                      ###";
		[0] call TON_fnc_HandleDB;
	};
};
sleep 5;
[] call TON_fnc_sleeper;
