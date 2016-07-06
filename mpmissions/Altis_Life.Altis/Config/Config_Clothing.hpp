/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*			//sad
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Roupa Batman", 125, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Roupa Cat", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Roupa Wolf", 175, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Roupa Gay", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Roupa Pedreiro", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Roupa Superman", 275, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Roupa Lacoste", 350, { "", "", -1 } },
            { "U_C_Commoner1_1", "Roupa Joker", 1100, { "", "", -1 } },
			{ "U_C_Commoner_shorts", "Roupa Pika", 1100, { "", "", -1 } },
			{ "U_OrestesBody", "Roupa Hand", 1100, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_NikosAgedBody", "Suit", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "Mochila Bobsponja", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 4000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 4000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 4000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 4000, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 4000, { "", "", -1 } },
            { "B_Bergen_rgr", "", 4000, { "", "", -1 } },
            { "B_Bergen_blk", "", 4000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_oli", "", 5000, { "", "", -1 } },
            { "B_Carryall_khk", "", 5000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 5000, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Uniforme Padrão", 25, { "", "", -1 } },
            { "U_B_SpecopsUniform_sgg", "Uniforme de Official", 25, { "life_coplevel", "SCALAR", 5 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "Boina Padrao", 50, { "life_coplevel", "SCALAR", -1 } },
			{ "H_Beret_02", "Boina de Oficial", 150, { "life_coplevel", "SCALAR", 5 } },
            { "H_Beret_Colonel", "Boina de Ten.Coronel", 150, { "life_coplevel", "SCALAR", 8 } },
			{ "H_Beret_Colonel", "Boina de Coronel", 200, { "life_coplevel", "SCALAR", 9 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 10, { "", "", -1 } }, 
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 1000, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "", 3500, { "life_coplevel", "SCALAR", -1 } },
            { "V_PlateCarrierGL_blk", "SWAT Vest", 6500, { "life_coplevel", "SCALAR", 9 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_cbr", "", 3500, { "", "", -1 } },
		    { "B_UAV_01_backpack_F", "", 6500, { "life_coplevel", "SCALAR", 9 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Scientist", "EMS Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_oucamo", "EMS Backpack", 3000, { "", "", -1 } }
        };
    };

	class RoupasBronze {
        title = "Loja de Roupas Bronze";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_I_CombatUniform", "Roupa VIP I", 9000, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_C_Poloshirt_blue", "Undead Brasil Roupa", 1250, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_B_PilotCoveralls", "Roupa VIP I", 9275, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_O_CombatUniform_oucamo", "Roupa VIP I", 9150, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_B_SpecopsUniform_sgg", "Roupa VIP I", 9175,{ "life_donorlevel", "SCALAR", 1 } },
			{ "U_I_HeliPilotCoveralls", "Roupa VIP I", 9125, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_IG_Guerilla1_1", "Roupa VIP I", 9350, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_C_Poor_2", "Roupa VIP I", 9250,{ "life_donorlevel", "SCALAR", 1 } },
			{ "U_IG_Guerilla2_1", "Roupa VIP I", 9650, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_IG_Guerilla2_2	", "Roupa VIP I", 9335, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_IG_Guerilla2_3", "Roupa VIP I", 9700, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_C_WorkerCoveralls", "Roupa VIP I", 9325 , { "life_donorlevel", "SCALAR", 1 } },
			{ "U_OrestesBody", "Roupa VIP I", 9100, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_NikosBody", "Roupa VIP I", 9500, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_NikosAgedBody", "Roupa de Chique VIP", 9500, { "life_donorlevel", "SCALAR", 1 } }

		};
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Bandanna_cbr", "", 165, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Bandanna_surfer", "", 135, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Booniehat_tan", "", 425, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Hat_blue", "", 310, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Hat_brown", "", 276, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Hat_checker", "", 340, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Hat_grey", "", 280, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Hat_tan", "", 265, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Cap_blu", "", 150, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Cap_grn", "", 150, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Cap_grn_BI", "", 150, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Cap_oli", "", 150, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Shemag_khk", "", 1500, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Shemag_tan", "", 1500, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_Shemag_olive_hs", "", 1500, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_ShemagOpen_khk", "", 1500, { "life_donorlevel", "SCALAR", 1 } },
			{ "H_ShemagOpen_tan", "", 1500, { "life_donorlevel", "SCALAR", 1 } }

        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 205, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Shades_Blue", "", 200, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Sport_Blackred", "", 200, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Sport_Checkered", "", 200, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Sport_Blackyellow", "", 200, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Sport_BlackWhite", "", 200, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Squares", "", 100, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Aviator", "", 1000, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Lady_Mirror", "", 500, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Lady_Dark", "", 500, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Lady_Blue", "", 500, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Lowprofile", "", 300, { "life_donorlevel", "SCALAR", 1 } },
			{ "G_Combat", "", 5500, { "life_donorlevel", "SCALAR", 1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "life_donorlevel", "SCALAR", 1 } },
			{ "V_TacVestIR_blk", "", 9000, { "life_donorlevel", "SCALAR", 1 } },
			{ "V_I_G_resistanceLeader_F", "", 12000, { "life_donorlevel", "SCALAR", 1 } },
			{ "V_PlateCarrierIA1_dgtl", "", 17000, { "life_donorlevel", "SCALAR", 1 } },
			{ "V_TacVestCamo_khk", "", 12000, { "life_donorlevel", "SCALAR", 1 } },
			{ "V_Press_F", "", 2000, { "life_donorlevel", "SCALAR", 1 } },
			{ "V_TacVest_camo", "", 12000, { "life_donorlevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Bergen_mcamo", "Mochila Gay", 4500, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Bergen_blk", "Mochila USA", 4500, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Kitbag_mcamo", "", 3950, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_TacticalPack_oli", "", 3500, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_FieldPack_ocamo", "", 1700, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Carryall_oli", "", 4500, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Carryall_khk", "", 4500, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Carryall_oucamo", "", 4500, { "life_donorlevel", "SCALAR", 1 } }
        };
    };

	class RoupasSilver {
        title = "Loja de Roupas Silver";
        license = "";
        side = "civ";
        uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_I_CombatUniform", "Roupa VIP II", 8000, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_C_Poloshirt_blue", "Undead Brasil Roupa", 1250, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_O_PilotCoveralls", "Roupa VIP II", 8275, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_O_CombatUniform_oucamo", "Roupa VIP II", 8150, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_O_CombatUniform_ocamo", "Roupa VIP II", 8175,{ "life_donorlevel", "SCALAR", 2 } },
			{ "U_IG_leader", "Roupa VIP II", 8525, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_I_Wetsuit", "Roupa VIP II", 8350, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_I_OfficerUniform", "Roupa VIP II", 8250,{ "life_donorlevel", "SCALAR", 2 } },
			{ "U_I_G_Story_Protagonist_F", "Roupa VIP II", 8650, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_I_G_resistanceLeader_F", "Roupa VIP II", 8735, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_I_CombatUniform_shortsleeve", "Roupa VIP III", 8700, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_C_Scientist", "Roupa VIP II", 8700, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_B_CTRG_2", "Roupa VIP II", 8100, { "life_donorlevel", "SCALAR", 2 } },
			{ "U_NikosBody", "Roupa VIP II", 8500, { "life_donorlevel", "SCALAR", 2 } }

        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Bandanna_cbr", "", 165, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Bandanna_surfer", "", 135, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Booniehat_tan", "", 425, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Hat_blue", "", 310, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Hat_brown", "", 276, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Hat_checker", "", 340, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Hat_grey", "", 280, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Hat_tan", "", 265, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Cap_blu", "", 150, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Cap_grn", "", 150, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Cap_grn_BI", "", 150, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Cap_oli", "", 150, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Shemag_khk", "", 1500, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Shemag_tan", "", 1500, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_Shemag_olive_hs", "", 1500, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_ShemagOpen_khk", "", 1500, { "life_donorlevel", "SCALAR", 2 } },
			{ "H_ShemagOpen_tan", "", 1500, { "life_donorlevel", "SCALAR", 2 } }

        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Shades_Black", "", 205, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Shades_Blue", "", 200, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Sport_Blackred", "", 200, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Sport_Checkered", "", 200, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Sport_Blackyellow", "", 200, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Sport_BlackWhite", "", 200, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Squares", "", 100, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Aviator", "", 1000, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Lady_Mirror", "", 500, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Lady_Dark", "", 500, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Lady_Blue", "", 500, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Lowprofile", "", 300, { "life_donorlevel", "SCALAR", 2 } },
			{ "G_Combat", "", 5500, { "life_donorlevel", "SCALAR", 2 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "life_donorlevel", "SCALAR", 2 } },
			{ "V_TacVestIR_blk", "", 7500, { "life_donorlevel", "SCALAR", 2 } },
			{ "V_PlateCarrier1_rgr", "", 14000, { "life_donorlevel", "SCALAR", 2 } },
			{ "V_PlateCarrier2_rgr", "", 14000, { "life_donorlevel", "SCALAR", 2 } },
			{ "V_PlateCarrier3_rgr", "", 14000, { "life_donorlevel", "SCALAR", 2 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Bergen_mcamo", "Mochila Gay", 4000, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Bergen_sgg", "Mochila USA", 4000, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Kitbag_mcamo", "", 2950, { "life_donorlevel", "SCALAR", 2 } },
			{ "B_FieldPack_ocamo", "", 2700, { "life_donorlevel", "SCALAR", 2 } },
			{ "B_Carryall_oli", "", 4500, { "life_donorlevel", "SCALAR", 2 } },
			{ "B_Carryall_khk", "", 4500, { "life_donorlevel", "SCALAR", 2 } },
			{ "B_Carryall_oucamo", "Mochila Ivisivel", 4500, { "life_donorlevel", "SCALAR", 2 } }
        };
    };

	class RoupasGold {
        title = "Loja de Roupas Gold";
        license = "";
        side = "civ";
        uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "life_donorlevel", "SCALAR", 3 } },
			{ "U_I_CombatUniform", "Roupa VIP III", 7000, { "life_donorlevel", "SCALAR", 3 } },
			{ "U_C_Poloshirt_blue", "Undead Brasil Roupa", 1250, { "life_donorlevel", "SCALAR", 3 } },
			{ "U_B_CombatUniform_mcam_worn	", "Roupa VIP III", 7275, { "life_donorlevel", "SCALAR", 3 } },
			{ "U_B_CombatUniform_mcam", "Roupa VIP III", 7150, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_B_CombatUniform_mcam_tshirt", "Roupa VIP III", 7175,{ "life_donorlevel", "SCALAR", 3 } },
			{ "U_B_CombatUniform_mcam_vest", "Roupa VIP III", 7125, { "life_donorlevel", "SCALAR", 3 } },
			{ "U_B_GhillieSuit", "Roupa VIP III", 7350, { "life_donorlevel", "SCALAR", 3 } },
			{ "U_B_FullGhillie_sard", "Roupa VIP III", 7250,{ "life_donorlevel", "SCALAR", 3 } },
			{ "U_B_FullGhillie_ard", "Roupa VIP III", 7650, { "life_donorlevel", "SCALAR", 3 } },
			{ "U_B_Protagonist_VR", "Roupa VIP IIII", 7735, { "life_donorlevel", "SCALAR", 3 } },
			{ "U_BG_Guerilla1_1", "Roupa VIP III", 7300, { "life_donorlevel", "SCALAR", 3 } },
			{ "U_BG_Guerrilla_6_1", "Roupa VIP III", 7700, { "life_donorlevel", "SCALAR", 3 } },
			{ "U_BG_leader", "Roupa VIP III", 7100, { "life_donorlevel", "SCALAR", 3 } },
			{ "U_I_G_resistanceLeader_F", "Roupa VIP III", 7500, { "life_donorlevel", "SCALAR", 3 } }

        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Bandanna_cbr", "", 165, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Bandanna_surfer", "", 135, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Booniehat_tan", "", 425, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Hat_blue", "", 310, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Hat_brown", "", 276, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Hat_checker", "", 340, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Hat_grey", "", 280, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Hat_tan", "", 265, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Cap_blu", "", 150, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Cap_grn", "", 150, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Cap_grn_BI", "", 150, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Cap_oli", "", 150, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Shemag_khk", "", 1500, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Shemag_tan", "", 1500, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_Shemag_olive_hs", "", 1500, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_ShemagOpen_khk", "", 1500, { "life_donorlevel", "SCALAR", 3 } },
			{ "H_ShemagOpen_tan", "", 1500, { "life_donorlevel", "SCALAR", 3 } }

        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Shades_Black", "", 205, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Shades_Blue", "", 200, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Sport_Blackred", "", 200, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Sport_Checkered", "", 200, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Sport_Blackyellow", "", 200, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Sport_BlackWhite", "", 200, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Squares", "", 100, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Aviator", "", 1000, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Lady_Mirror", "", 500, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Lady_Dark", "", 500, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Lady_Blue", "", 500, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Lowprofile", "", 300, { "life_donorlevel", "SCALAR", 3 } },
			{ "G_Combat", "", 5500, { "life_donorlevel", "SCALAR", 3 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "life_donorlevel", "SCALAR", 3 } },
			{ "V_TacVestIR_blk", "", 7000, { "life_donorlevel", "SCALAR", 3 } },
			{ "V_PlateCarrierIA2_dgtl", "", 12000, { "life_donorlevel", "SCALAR", 3 } },
			{ "V_PlateCarrierH_CTRG", "", 18000, { "life_donorlevel", "SCALAR", 3 } },
			{ "V_PlateCarrierGL_rgr", "", 15000, { "life_donorlevel", "SCALAR", 3 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "life_donorlevel", "SCALAR", 3 } },
            { "B_Bergen_mcamo", "Mochila Gay", 3500, { "life_donorlevel", "SCALAR", 3 } },
			{ "B_Bergen_sgg", "Mochila USA", 3500, { "life_donorlevel", "SCALAR", 3 } },
			{ "B_Kitbag_mcamo", "", 950, { "life_donorlevel", "SCALAR", 3 } },
			{ "B_TacticalPack_oli", "", 2300, { "life_donorlevel", "SCALAR", 3 } },
			{ "B_FieldPack_ocamo", "", 2300, { "life_donorlevel", "SCALAR", 3 } },
			{ "B_Bergen_sgg", "", 2500, { "life_donorlevel", "SCALAR", 3 } },
			{ "B_Carryall_oli", "", 4000, { "life_donorlevel", "SCALAR", 3 } },
			{ "B_Carryall_khk", "", 4000, { "life_donorlevel", "SCALAR", 3 } },
			{ "B_Carryall_oucamo", "Mochila Ivisivel", 4000, { "life_donorlevel", "SCALAR", 3 } }
        };
    };

	class RoupasPlatinum {
        title = "Loja de Roupas Platinum";
        license = "";
        side = "civ";
        uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "life_donorlevel", "SCALAR", 4 } },
			{ "U_I_CombatUniform", "Roupa Padrão VIP", 1000, { "life_donorlevel", "SCALAR", 4 } },
			{ "U_C_Poloshirt_blue", "Undead Brasil Roupa", 1250, { "life_donorlevel", "SCALAR", 4 } },
			{ "U_O_OfficerUniform_ocamo", "ROUPA VIP IV", 6275, { "life_donorlevel", "SCALAR", 4 } },
			{ "U_O_GhillieSuit", "ROUPA VIP IV", 25150, { "life_donorlevel", "SCALAR", 4 } },
			{ "U_O_FullGhillie_sard", "ROUPA VIP IV", 35175,{ "life_donorlevel", "SCALAR", 4 } },
			{ "U_O_FullGhillie_lsh", "ROUPA VIP IV", 35125, { "life_donorlevel", "SCALAR", 4 } },
			{ "U_O_FullGhillie_ard", "ROUPA VIP IV", 35350, { "life_donorlevel", "SCALAR", 4 } },
			{ "U_MillerBody", "ROUPA VIP IV", 6250,{ "life_donorlevel", "SCALAR", 4 } },
			{ "U_Marshal", "ROUPA VIP IV", 4650, { "life_donorlevel", "SCALAR", 4 } },
			{ "U_KerryBody", "ROUPA VIP IV", 6735, { "life_donorlevel", "SCALAR", 4 } },
			{ "U_IG_leader", "ROUPA VIP IV", 6700, { "life_donorlevel", "SCALAR", 4 } },
			{ "U_C_Driver_1", "ROUPA VIP IV", 6100, { "life_donorlevel", "SCALAR", 4 } },
			{ "U_BG_leader", "ROUPA VIP IV", 6500, { "life_donorlevel", "SCALAR", 4 } }
		
		};
  		headgear[] = {
            { "NONE", "Remove Hat", 0, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Bandanna_cbr", "", 165, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Bandanna_surfer", "", 135, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Booniehat_tan", "", 425, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Hat_blue", "", 310, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Hat_brown", "", 276, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Hat_checker", "", 340, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Hat_grey", "", 280, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Hat_tan", "", 265, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Cap_blu", "", 150, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Cap_grn", "", 150, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Cap_grn_BI", "", 150, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Cap_oli", "", 150, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Shemag_khk", "", 1500, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Shemag_tan", "", 1500, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_Shemag_olive_hs", "", 1500, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_ShemagOpen_khk", "", 1500, { "life_donorlevel", "SCALAR", 4 } },
			{ "H_ShemagOpen_tan", "", 1500, { "life_donorlevel", "SCALAR", 4 } }

        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Shades_Black", "", 205, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Shades_Blue", "", 200, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Sport_Blackred", "", 200, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Sport_Checkered", "", 200, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Sport_Blackyellow", "", 200, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Sport_BlackWhite", "", 200, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Squares", "", 100, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Aviator", "", 1000, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Lady_Mirror", "", 500, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Lady_Dark", "", 500, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Lady_Blue", "", 500, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Lowprofile", "", 300, { "life_donorlevel", "SCALAR", 4 } },
			{ "G_Combat", "", 5500, { "life_donorlevel", "SCALAR", 4 } }
        };
        vests[] = {
			{ "NONE", "Remove Vest", 0, { "life_donorlevel", "SCALAR", 4 } },
			{ "V_TacVestIR_blk", "", 6500, { "life_donorlevel", "SCALAR", 4 } },
			{ "V_PlateCarrierIA2_dgtl", "", 9500, { "life_donorlevel", "SCALAR", 4 } },
			{ "V_PlateCarrierIAGL_dgtl", "", 19500, { "life_donorlevel", "SCALAR", 4 } },
			{ "V_PlateCarrierH_CTRG", "", 13500, { "life_donorlevel", "SCALAR", 4 } },
			{ "V_PlateCarrierGL_rgr", "", 13500, { "life_donorlevel", "SCALAR", 4 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "life_donorlevel", "SCALAR", 4 } },
            { "B_Bergen_mcamo", "Mochila Gay", 3000, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Bergen_sgg", "Mochila USA", 3000, { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Kitbag_mcamo", "", 1950, { "life_donorlevel", "SCALAR", 4 } },
			{ "B_TacticalPack_oli", "", 1500, { "life_donorlevel", "SCALAR", 4 } },
			{ "B_FieldPack_ocamo", "", 1700, { "life_donorlevel", "SCALAR", 4 } },
			{ "B_Carryall_oli", "", 3500, { "life_donorlevel", "SCALAR", 4 } },
			{ "B_Carryall_khk", "", 3500, { "life_donorlevel", "SCALAR", 4 } },
			{ "B_Carryall_oucamo", "", 3500, { "life_donorlevel", "SCALAR", 4 } }
        };
    };

	class RoupasDiamante {
        title = "Loja de Roupas Diamante";
        license = "";
        side = "civ";
        uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_B_CombatUniform_mcam", "Roupa VIP V", 5500, { "life_donorlevel", "SCALAR", 5 } },
            { "U_B_CombatUniform_mcam_vest", "Roupa VIP V", 5500, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_I_CombatUniform", "Roupa Padrão VIP", 1000, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_C_Poloshirt_blue", "Undead Brasil Roupa", 5250, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_O_OfficerUniform_ocamo", "ROUPA VIP V", 5275, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_O_GhillieSuit", "ROUPA VIP V", 9150, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_O_FullGhillie_sard", "ROUPA VIP V", 14175,{ "life_donorlevel", "SCALAR", 5 } },
			{ "U_O_FullGhillie_lsh", "ROUPA VIP V", 14125, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_O_FullGhillie_ard", "ROUPA VIP V", 14350, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_MillerBody", "ROUPA VIP V", 5250,{ "life_donorlevel", "SCALAR", 5 } },
			{ "U_Marshal", "ROUPA VIP V", 5650, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_KerryBody", "ROUPA VIP V",5735, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_IG_leader", "ROUPA VIP V", 5701, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_C_Driver_1", "ROUPA VIP V", 5100, { "life_donorlevel", "SCALAR", 5 } },
			{ "U_BG_leader", "ROUPA VIP V", 5500, { "life_donorlevel", "SCALAR", 5 } }

        };
		headgear[] = {
            { "NONE", "Remove Hat", 0, { "life_donorlevel", "SCALAR", 5 } },
			{ "H_Watchcap_camo", "", 150, { "life_donorlevel", "SCALAR", 5 } },
			{ "H_Watchcap_sgg", "", 150, { "life_donorlevel", "SCALAR", 5 } },
			{ "H_Watchcap_khk", "", 150, { "life_donorlevel", "SCALAR", 5 } },
			{ "H_Shemag_khk", "", 1500, { "life_donorlevel", "SCALAR", 5 } },
			{ "H_Shemag_tan", "", 1500, { "life_donorlevel", "SCALAR", 5 } },
			{ "H_Shemag_olive_hs", "", 1500, { "life_donorlevel", "SCALAR", 5 } },
			{ "H_ShemagOpen_khk", "", 1500, { "life_donorlevel", "SCALAR", 5 } },
			{ "H_ShemagOpen_tan", "", 1500, { "life_donorlevel", "SCALAR", 5 } }

        };
        
		goggles[] = {
            { "NONE", "Remove Glasses", 0, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Shades_Black", "", 205, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Shades_Blue", "", 200, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Sport_Blackred", "", 200, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Sport_Checkered", "", 200, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Sport_Blackyellow", "", 200, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Sport_BlackWhite", "", 200, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Squares", "", 100, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Aviator", "", 1000, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Lady_Mirror", "", 500, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Lady_Dark", "", 500, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Lady_Blue", "", 500, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Lowprofile", "", 300, { "life_donorlevel", "SCALAR", 5 } },
			{ "G_Combat", "", 5500, { "life_donorlevel", "SCALAR", 5 } }
        };
		vests[] = {
            { "NONE", "Remove Vest", 0, { "life_donorlevel", "SCALAR", 5 } },
			{ "V_PlateCarrierIA1_dgtl", "", 8000, { "life_donorlevel", "SCALAR", 5 } },
			{ "V_PlateCarrier1_rgr", "", 9200, { "life_donorlevel", "SCALAR", 5 } },
			{ "V_PlateCarrier2_rgr", "", 15000, { "life_donorlevel", "SCALAR", 5 } },
			{ "V_PlateCarrierIA2_dgtl", "", 19000, { "life_donorlevel", "SCALAR", 5 } },
			{ "V_PlateCarrierIAGL_oli", "", 35000, { "life_donorlevel", "SCALAR", 5 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "life_donorlevel", "SCALAR", 5 } },
            { "B_Bergen_mcamo", "Mochila Gay", 2500, { "life_donorlevel", "SCALAR", 5 } },
			{ "B_Bergen_sgg", "Mochila USA", 2500, { "life_donorlevel", "SCALAR", 5 } },
			{ "B_Kitbag_mcamo", "", 3450, { "life_donorlevel", "SCALAR", 5 } },
			{ "B_TacticalPack_oli", "", 1500, { "life_donorlevel", "SCALAR", 5 } },
			{ "B_FieldPack_ocamo", "", 2700, { "life_donorlevel", "SCALAR", 5 } },
			{ "B_Carryall_oli", "", 3000, { "life_donorlevel", "SCALAR", 5 } },
			{ "B_Carryall_khk", "", 3000, { "life_donorlevel", "SCALAR", 5 } },
			{ "B_Carryall_oucamo", "", 3000, { "life_donorlevel", "SCALAR", 5 } }
        };
    };

    class supporter {
        title = "STR_Shops_C_Supporter";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };


    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "", 300, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 7500, { "", "", -1 } },
			{ "U_O_Wetsuit", "", 9000, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 14500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15000, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_vest", "", 17500, { "", "", -1 } },
			{ "U_B_SpecopsUniform_sgg", "", 17500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_blk", "", 17500, { "", "", -1 } },
			{ "U_B_CTRG_3", "", 17500, { "", "", -1 } },
			{ "U_I_CombatUniform_shortsleeve", "", 17500, { "", "", -1 } },
			{ "U_IG_leader", "", 19000, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 60000, { "", "", -1 } },
			{ "U_B_FullGhillie_lsh", "", 80000, { "", "", -1 } }

        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Watchcap_camo", "", 150, { "", "", -1 } },
			{ "H_Watchcap_sgg", "", 150, { "", "", -1 } },
			{ "H_Watchcap_khk", "", 150, { "", "", -1 } },
			{ "H_Shemag_khk", "", 3500, { "", "", -1 } },
			{ "H_Shemag_tan", "", 3500, { "", "", -1 } },
			{ "H_Shemag_olive_hs", "", 3500, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 3500, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 3500, { "", "", -1 } }
 
		};
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } },
            { "V_PlateCarrierL_CTRG", "", 20000, { "", "", -1 } },
            { "V_HarnessOGL_brn", "Colete Suicida", 600000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3800, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3800, { "", "", -1 } },
            { "B_FieldPack_blk", "", 4000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 4000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 4000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 4000, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 4000, { "", "", -1 } },
            { "B_Bergen_rgr", "", 4000, { "", "", -1 } },
            { "B_Bergen_blk", "", 4000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 4500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 4500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 4500, { "", "", -1 } },
            { "B_Carryall_oli", "", 4500, { "", "", -1 } },
            { "B_Carryall_khk", "", 4500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 4500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 11500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 11500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 11500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 11500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 11500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 11500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 11500, { "", "", -1 } },
            { "U_C_Driver_2", "", 13500, { "", "", -1 } },
            { "U_C_Driver_1", "", 13600, { "", "", -1 } },
            { "U_C_Driver_3", "", 13700, { "", "", -1 } },
            { "U_C_Driver_4", "", 13700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 4500, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 4500, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 4500, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 4500, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 4500, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 4500, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 4500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 4500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 4500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 4500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
