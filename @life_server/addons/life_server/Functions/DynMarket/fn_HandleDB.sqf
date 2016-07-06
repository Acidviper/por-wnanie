/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

_switch = _this select 0;
_whatanumber = 1;

switch (_switch) do
{
	case 0:
	{
		_query = format["UPDATE dynmarket SET prices = '%1' WHERE id=1;",DYNMARKET_Items_CurrentPriceArr];
		waitUntil {sleep (random 0.3); !DB_Async_Active};
		_queryResult = [_query,1] call DB_fnc_asyncCall;
		diag_log "### DYNMARKET >> SAUVEGARDE AVEC SUCCÈS DES PRIX COURANTS DANS LA BASE DE DONNÉES   ###";
	};
	
	case 1:
	{
		_query = format["SELECT prices FROM dynmarket WHERE id=1;"];

		waitUntil{sleep (random 0.3); !DB_Async_Active};
		_tickTime = diag_tickTime;
		_queryResult = [_query,2] call DB_fnc_asyncCall;
		//DYNMARKET_Items_CurrentPriceArr = _queryResult select 0;
		_pricearray = _queryResult select 0;
		if (count _pricearray < 1) then {
			diag_log "########################## BOURSE DYNAMIQUE ##########################";
			diag_log "###        NE PEUT PAS CHARGER LES PRIX DAND LA BDD: ERREUR 01x    ###";
			diag_log "###        LA REQUÊTE DES PRIX ÉTAIT EXCEPTIONNELEMENT VIDE!       ###";
			diag_log "###        SI VOUS UTILISER LA BOURSE DYNAMIQUE POUR LA 1ÈRE FOIS, ###";
			diag_log "###        SVP IGNOREZ CE MESSAGE!                                 ###";
			diag_log "######################################################################";
		} else {
			DYNMARKET_Items_CurrentPriceArr = _pricearray;
			{
				_itemName = _x select 0;
				_itemNewPrice = _x select 1;		
				_index = -1;
				{
					_index = _index + 1;
					_curItemName = _x select 0;
					if (_curItemName==_itemName) then {
						DYNMARKET_sellarraycopy set [_index,[_itemName,_itemNewPrice]];
					};
				} forEach DYNMARKET_sellarraycopy;
			} forEach DYNMARKET_Items_CurrentPriceArr;
			diag_log "########################## BOURSE DYNAMIQUE ########################";
			diag_log "###  LES PRIX ONT ÉTÉ CHARGÉ AVEC SUCCÈS DANS LA BASE DE DONNÉES ###";
			diag_log "####################################################################";
		};
	};
};