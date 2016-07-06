/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "FirstAidKit", "Bolsa de Sangue", 250, 65 },
            { "hgun_Rook40_F", "Rook 9mm", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "Zubr .45ACP", 9850, -1 },
            { "hgun_ACPC2_F", "ACP .45ACP", 11500, -1 },
            { "hgun_PDW2000_F", "PDW 9mm", 25000, -1 },
            { "SMG_02_F", "Sting 9 mm", 30500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
            { "30Rnd_556x45_Stanag", "", 100 },
            { "11Rnd_45ACP_Mag", "", 60 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

	class bronze {    
        name = "Bronze Armas Shop";
		side = "civ";
        license = "gun";
        level[] = { "life_donorlevel", "SCALAR", 1, "Você precisa ser um nível doador Bronze para acessar a loja, acesse nosso forum ou teamspeak para obter informações." };
		items[] = {
            { "FirstAidKit", "Bolsa de Sangue", 250, 65 },
            { "hgun_Pistol_heavy_02_F", "ACP .45", 9500, 2500 },
			{ "hgun_Rook40_F", "Rook 9mm", 6500, 2500 },
            { "hgun_ACPC2_F", "ACP .45", 6250, 65 },
            { "arifle_TRG20_F", "TRG 5.56mm", 43000, 2500 },
			{ "arifle_TRG21_F", "TRG 5.56mm", 43000, 2500 },
            { "arifle_Katiba_F", "Katiba 6.5mm", 56000, 5000 },
            { "arifle_Katiba_C_F", "Katiba 6.5mm", 56000, 5000 },
            { "arifle_SDAR_F", "SDAR 5.56mm", 22000, 7500 },
            { "SMG_01_F", "Vermin SMG .45ACP", 30000, 7500 },
            { "arifle_Mk20_F", "Mk20 5.56mm", 40000, 7500 },
            { "arifle_Mk20C_F", "Mk20 5.56mm", 40000, 7500 },
            { "arifle_MXC_F", "MXC 6.5 mm", 63000, 7500 },
            { "arifle_MX_F", "MX 6.5 mm", 63000, 7500 },
            { "LMG_Mk200_F", "Mk200 6.5 mm", 130000, 7500 },
			{ "srifle_DMR_01_F", "Rahim 7.62 mm", 73000, 7500 }
        };
        mags[] = {
            { "6Rnd_45ACP_Cylinder", "Munição 9rnd .45", 725 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 725 },
			{ "11Rnd_45ACP_Mag", "Munição 11rnd .45", 725 },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1725 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd .45", 750 },
            { "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 5650 },
            { "30Rnd_65x39_caseless_green", "Munição 30rnd 6.5mm", 1325 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "Munição 30rnd 5.56mm", 1325 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 1320 }
        };
        accs[] = {
            { "optic_ACO_grn", "Aco", 3000 },
            { "optic_Holosight", "Holosight", 3000 },
            { "optic_Hamr", "Hamr", 9500 },
            { "optic_Holosight_smg", "Holosight Smg", 2000 },
            { "optic_MRCO", "Mrco", 12500 },
            { "optic_Arco", "Arco", 8500 },
            { "acc_pointer_IR", "Laser", 1000 },
            { "acc_flashlight", "Lanterna", 8000 }
        };
    };
	
	class silver {
        name = "Silver Armas Shop";
		side = "civ";
        license = "gun";
        level[] = { "life_donorlevel", "SCALAR", 2, "Você precisa ser um nível doador Silver para acessar a loja, acesse nosso forum ou teamspeak para obter informações." };
		items[] = {
            { "FirstAidKit", "Bolsa de Sangue", 250, 65 },
            { "hgun_Pistol_heavy_02_F", "ACP .45", 9000, 2500 },
			{ "hgun_Rook40_F", "Rook 9mm", 6000, 2500 },
            { "hgun_ACPC2_F", "ACP .45", 6050, 65 },
            { "arifle_TRG20_F", "TRG 5.56mm", 41000, 2500 },
			{ "arifle_TRG21_F", "TRG 5.56mm", 41000, 2500 },
            { "arifle_Katiba_F", "Katiba 6.5mm", 53000, 5000 },
            { "arifle_Katiba_C_F", "Katiba 6.5mm", 53000, 5000 },
            { "arifle_SDAR_F", "SDAR 5.56mm", 20000, 7500 },
            { "SMG_01_F", "Vermin SMG .45ACP", 27000, 7500 },
            { "arifle_Mk20_F", "Mk20 5.56mm", 37000, 7500 },
            { "arifle_Mk20C_F", "Mk20 5.56mm", 37000, 7500 },
            { "arifle_MXC_F", "MXC 6.5 mm", 60000, 7500 },
            { "arifle_MX_F", "MX 6.5 mm", 60000, 7500 },
            { "LMG_Mk200_F", "Mk200 6.5 mm", 115000, 7500 },
			{ "arifle_MX_SW_F", "MX SW 6.5 mm", 100000, 7500 },
			{ "arifle_MXM_F", "MXM 6.5 mm", 50000, 7500 },
			{ "srifle_DMR_01_F", "Rahim 7.62 mm", 65000, 7500 }
        };
        mags[] = {
            { "6Rnd_45ACP_Cylinder", "Munição 9rnd .45", 725 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 725 },
			{ "11Rnd_45ACP_Mag", "Munição 11rnd .45", 725 },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1725 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd .45", 750 },
            { "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 5650 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "Munição 100rnd 6.5mm", 2550 },
            { "30Rnd_65x39_caseless_green", "Munição 30rnd 6.5mm", 1325 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "Munição 30rnd 5.56mm", 1325 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 1320 }
        };
        accs[] = {
            { "optic_ACO_grn", "Aco", 3000 },
            { "optic_Holosight", "Holosight", 3000 },
            { "optic_Hamr", "Hamr", 9500 },
            { "optic_Holosight_smg", "Holosight Smg", 2000 },
            { "optic_MRCO", "Mrco", 12500 },
            { "optic_Arco", "Arco", 8500 },
            { "acc_pointer_IR", "Laser", 1000 },
            { "acc_flashlight", "Lanterna", 8000 },
			{ "muzzle_snds_Lt", "Silenciador 9mm", 10750 },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 15750 },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 18050 }
        };
    };
	
	class gold {
        name = "Gold Armas Shop";
		side = "civ";
        license = "gun";
        level[] = { "life_donorlevel", "SCALAR", 3, "Você precisa ser um nível doador Gold para acessar a loja, acesse nosso forum ou teamspeak para obter informações." };
		items[] = {
            { "FirstAidKit", "Bolsa de Sangue", 250, 65 },
            { "hgun_Pistol_heavy_02_F", "ACP .45", 8000, 2500 },
			{ "hgun_Rook40_F", "Rook 9mm", 5000, 2500 },
            { "hgun_ACPC2_F", "ACP .45", 5050, 65 },
            { "arifle_TRG20_F", "TRG 5.56mm", 38000, 2500 },
			{ "arifle_TRG21_F", "TRG 5.56mm", 38000, 2500 },
            { "arifle_Katiba_F", "Katiba 6.5mm", 50000, 5000 },
            { "arifle_Katiba_C_F", "Katiba 6.5mm", 50000, 5000 },
            { "arifle_SDAR_F", "SDAR 5.56mm", 18000, 7500 },
            { "SMG_01_F", "Vermin SMG .45ACP", 24000, 7500 },
            { "arifle_Mk20_F", "Mk20 5.56mm", 35000, 7500 },
            { "arifle_Mk20C_F", "Mk20 5.56mm", 35000, 7500 },
            { "arifle_MXC_F", "MXC 6.5 mm", 56000, 7500 },
            { "arifle_MX_F", "MX 6.5 mm", 56000, 7500 },
            { "LMG_Mk200_F", "Mk200 6.5 mm", 100000, 7500 },
			{ "arifle_MX_SW_F", "MX SW 6.5 mm", 90000, 7500 },
			{ "arifle_MXM_F", "MXM 6.5 mm", 45000, 7500 },
			{ "srifle_EBR_F", "Mk18 ABR 7.62 mm", 95000, 7500 },
			{ "srifle_DMR_06_olive_F", "Mk14 7.62mm", 85000, 7500 },
			{ "srifle_DMR_01_F", "Rahim 7.62 mm", 62000, 7500 }
        };
        mags[] = {
            { "6Rnd_45ACP_Cylinder", "Munição 9rnd .45", 725 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 725 },
			{ "11Rnd_45ACP_Mag", "Munição 11rnd .45", 725 },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1725 },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 1725 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd .45", 750 },
            { "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 5650 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "Munição 100rnd 6.5mm", 2550 },
            { "30Rnd_65x39_caseless_green", "Munição 30rnd 6.5mm", 1325 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "Munição 30rnd 5.56mm", 1325 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 1320 }
        };
        accs[] = {
            { "optic_ACO_grn", "Aco", 3000 },
            { "optic_Holosight", "Holosight", 3000 },
            { "optic_Hamr", "Hamr", 9500 },
            { "optic_Holosight_smg", "Holosight Smg", 2000 },
            { "optic_MRCO", "Mrco", 12500 },
            { "optic_Arco", "Arco", 8500 },
            { "acc_pointer_IR", "Laser", 1000 },
            { "acc_flashlight", "Lanterna", 8000 },
			{ "muzzle_snds_Lt", "Silenciador 9mm", 8750 },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 10750 },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 15050 }
        };
    };
    
	class platinum {
        name = "Platinum Armas Shop";
		side = "civ";
        license = "gun";
        level[] = { "life_donorlevel", "SCALAR", 4, "Você precisa ser um nível doador Platinum para acessar a loja, acesse nosso forum ou teamspeak para obter informações." };
		items[] = {
            { "FirstAidKit", "Bolsa de Sangue", 250, 65 },
            { "hgun_Pistol_heavy_02_F", "ACP .45", 7000, 2500 },
			{ "hgun_Rook40_F", "Rook 9mm", 4000, 2500 },
            { "hgun_ACPC2_F", "ACP .45", 4050, 65 },
            { "arifle_TRG20_F", "TRG 5.56mm", 34000, 2500 },
			{ "arifle_TRG21_F", "TRG 5.56mm", 34000, 2500 },
            { "arifle_Katiba_F", "Katiba 6.5mm", 46000, 5000 },
            { "arifle_Katiba_C_F", "Katiba 6.5mm", 46000, 5000 },
            { "arifle_SDAR_F", "SDAR 5.56mm", 16000, 7500 },
            { "SMG_01_F", "Vermin SMG .45ACP", 20000, 7500 },
            { "arifle_Mk20_F", "Mk20 5.56mm", 31000, 7500 },
            { "arifle_Mk20C_F", "Mk20 5.56mm", 31000, 7500 },
            { "arifle_MXC_F", "MXC 6.5 mm", 50000, 7500 },
            { "arifle_MX_F", "MX 6.5 mm", 50000, 7500 },
            { "LMG_Mk200_F", "Mk200 6.5 mm", 90000, 7500 },
			{ "arifle_MX_SW_F", "MX SW 6.5 mm", 80000, 7500 },
			{ "arifle_MXM_F", "MXM 6.5 mm", 41000, 7500 },
			{ "srifle_EBR_F", "Mk18 ABR 7.62 mm", 91000, 7500 },
			{ "srifle_DMR_06_olive_F", "Mk14 7.62mm", 81000, 7500 },
			{ "srifle_DMR_01_F", "Rahim 7.62 mm", 58000, 7500 }
        };
        mags[] = {
            { "6Rnd_45ACP_Cylinder", "Munição 9rnd .45", 725 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 725 },
			{ "11Rnd_45ACP_Mag", "Munição 11rnd .45", 725 },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1225 },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 1225 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd .45", 750 },
            { "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 4650 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "Munição 100rnd 6.5mm", 2050 },
            { "30Rnd_65x39_caseless_green", "Munição 30rnd 6.5mm", 1025 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "Munição 30rnd 5.56mm", 1025 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 1020 }
        };
        accs[] = {
            { "optic_ACO_grn", "Aco", 3000 },
            { "optic_Holosight", "Holosight", 3000 },
            { "optic_Hamr", "Hamr", 9500 },
            { "optic_Holosight_smg", "Holosight Smg", 2000 },
            { "optic_MRCO", "Mrco", 12500 },
            { "optic_Arco", "Arco", 8500 },
            { "acc_pointer_IR", "Laser", 1000 },
            { "acc_flashlight", "Lanterna", 8000 },
			{ "muzzle_snds_Lt", "Silenciador 9mm", 6750 },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 8750 },
			{ "muzzle_snds_B", "Silenciador 7.62mm", 18750 },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 12050 }
        };
    };
	
	class diamante {
        name = "Diamante Armas Shop";
        side = "civ";
        license = "gun";
        level[] = { "life_donorlevel", "SCALAR", 5, "Você precisa ser um nível doador Diamante para acessar a loja, acesse nosso forum ou teamspeak para obter informações." };
		items[] = {
            { "FirstAidKit", "Bolsa de Sangue", 250, 65 },
            { "hgun_Pistol_heavy_02_F", "ACP .45", 6000, 2500 },
			{ "hgun_Rook40_F", "Rook 9mm", 3000, 2500 },
            { "hgun_ACPC2_F", "ACP .45", 3050, 65 },
            { "arifle_TRG20_F", "TRG 5.56mm", 30000, 2500 },
			{ "arifle_TRG21_F", "TRG 5.56mm", 30000, 2500 },
            { "arifle_Katiba_F", "Katiba 6.5mm", 42000, 5000 },
            { "arifle_Katiba_C_F", "Katiba 6.5mm", 42000, 5000 },
            { "arifle_SDAR_F", "SDAR 5.56mm", 13000, 7500 },
            { "SMG_01_F", "Vermin SMG .45ACP", 18000, 7500 },
            { "arifle_Mk20_F", "Mk20 5.56mm", 28000, 7500 },
            { "arifle_Mk20C_F", "Mk20 5.56mm", 28000, 7500 },
            { "arifle_MXC_F", "MXC 6.5 mm", 48000, 7500 },
            { "arifle_MX_F", "MX 6.5 mm", 48000, 7500 },
            { "LMG_Mk200_F", "Mk200 6.5 mm", 86000, 7500 },
			{ "arifle_MX_SW_F", "MX SW 6.5 mm", 74000, 7500 },
			{ "arifle_MXM_F", "MXM 6.5 mm", 37000, 7500 },
			{ "srifle_EBR_F", "Mk18 ABR 7.62 mm", 85000, 7500 },
			{ "LMG_Zafir_F", "Zafir 7.62 mm", 271000, 7500 },
			{ "srifle_DMR_06_olive_F", "Mk14 7.62mm", 76000, 7500 },
			{ "srifle_DMR_03_khaki_F", "Mk-I EMR 7.62mm", 165000, 7500 },
			{ "srifle_DMR_01_F", "Rahim 7.62 mm", 54000, 7500 },
			{ "srifle_LRR_F", "M320 LRR .408", 958000, 7500 }
        };
        mags[] = {
            { "6Rnd_45ACP_Cylinder", "Munição 9rnd .45", 725 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 725 },
			{ "7Rnd_408_Mag", "Munição 7rnd 408mm", 12725 },
			{ "11Rnd_45ACP_Mag", "Munição 11rnd .45", 725 },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1225 },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 1225 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd .45", 750 },
            { "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 4650 },
			{ "150Rnd_762x54_Box_Tracer", "Munição 150rnd 7.62mm", 6650 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "Munição 100rnd 6.5mm", 2050 },
            { "30Rnd_65x39_caseless_green", "Munição 30rnd 6.5mm", 1025 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "Munição 30rnd 5.56mm", 1025 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 1020 }
        };
        accs[] = {
            { "optic_ACO_grn", "Aco", 3000 },
            { "optic_Holosight", "Holosight", 3000 },
            { "optic_Hamr", "Hamr", 9500 },
            { "optic_Holosight_smg", "Holosight Smg", 2000 },
            { "optic_MRCO", "Mrco", 12500 },
            { "optic_Arco", "Arco", 8500 },
			{ "optic_DMS", "DMS", 28500 },
			{ "optic_SOS", "SOS", 58500 },
            { "acc_pointer_IR", "Laser", 1000 },
            { "acc_flashlight", "Lanterna", 8000 },
			{ "muzzle_snds_Lt", "Silenciador 9mm", 4750 },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 6750 },
			{ "muzzle_snds_B", "Silenciador 7.62mm", 15750 },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 9050 }
        };
       
    };

    class donator1 {
        name = "Donator 1 Shop";
        side = "civ";
        license = "rebel";
        level[] = { "life_donorlevel", "SCALAR", 1, "You need to be a donator level 1 to access this shop, join our teamspeak for information." };
        items[] = {
            { "FirstAidKit", "", 250, 65 },
            { "srifle_DMR_04_F", "", 135000, -1 },
            { "srifle_DMR_05_tan_f", "", 200000 },
            { "5Rnd_127x108_Mag", "", 2025 },
            { "150Rnd_93x64_Mag", "", 3025 },
            { "130Rnd_338_Mag", "", 4025 },
            { "10Rnd_338_Mag", "", 445 },
            { "10Rnd_93x64_DMR_05_Mag", "", 405 },
            { "RPG32_HE_F", "", 225000 }
        };
        mags[] = {
            { "5Rnd_127x108_Mag", "", 2025 },
            { "150Rnd_93x64_Mag", "", 3025 },
            { "130Rnd_338_Mag", "", 4025 },
            { "10Rnd_338_Mag", "", 445 },
            { "10Rnd_93x64_DMR_05_Mag", "", 405 },
            { "10Rnd_127x54_Mag", "", 405 },
            { "RPG32_HE_F", "", 125000 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 10500 },
            { "optic_Holosight_smg", "", 2500 },
            { "optic_MRCO", "", 14500 },
            { "optic_Arco", "", 10500 },
            { "optic_KHS_blk", "", 22500 },
            { "optic_AMS", "", 23500 },
            { "optic_DMS", "", 17500 },
            { "optic_SOS", "", 22500 },
            { "optic_NVS", "", 28500 },
            { "optic_LRPS", "", 33500 },
            { "acc_pointer_IR", "", 1500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class donator2 {
        name = "Donator 2 Shop";
        side = "civ";
        license = "rebel";
        level[] = { "life_donorlevel", "SCALAR", 2, "You need to be a donator level 2 to access this shop, join our teamspeak for information." };
        items[] = {
            { "FirstAidKit", "", 250, 65 },
            { "srifle_DMR_04_F", "", 135000, -1 },
            { "MMG_02_camo_F", "", 250000, -1 },
            { "srifle_DMR_02_sniper_F", "", 180000, 7500 },
            { "srifle_DMR_05_tan_f", "", 200000 },
            { "APERSTripMine_Wire_Mag", "", 120000 },
            { "5Rnd_127x108_Mag", "", 2025 },
            { "150Rnd_93x64_Mag", "", 3025 },
            { "130Rnd_338_Mag", "", 4025 },
            { "10Rnd_338_Mag", "", 445 },
            { "10Rnd_93x64_DMR_05_Mag", "", 405 },
            { "RPG32_HE_F", "", 225000 }
        };
        mags[] = {
            { "5Rnd_127x108_Mag", "", 2025 },
            { "150Rnd_93x64_Mag", "", 3025 },
            { "130Rnd_338_Mag", "", 4025 },
            { "10Rnd_338_Mag", "", 445 },
            { "10Rnd_127x54_Mag", "", 405 },
            { "10Rnd_93x64_DMR_05_Mag", "", 405 },
            { "RPG32_HE_F", "", 125000 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 10500 },
            { "optic_Holosight_smg", "", 2500 },
            { "optic_MRCO", "", 14500 },
            { "optic_Arco", "", 10500 },
            { "optic_KHS_blk", "", 22500 },
            { "optic_AMS", "", 23500 },
            { "optic_DMS", "", 17500 },
            { "optic_SOS", "", 22500 },
            { "optic_NVS", "", 28500 },
            { "optic_LRPS", "", 33500 },
            { "acc_pointer_IR", "", 1500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class donator3 {
        name = "Donator 3 Shop";
        side = "civ";
        license = "rebel";
        level[] = { "life_donorlevel", "SCALAR", 3, "You need to be a donator level 3 to access this shop, join our teamspeak for information." };
        items[] = {
            { "FirstAidKit", "", 250, 65 },
            { "srifle_DMR_04_F", "", 135000, -1 },
            { "MMG_01_hex_F", "", 250000, 5000 },
            { "MMG_02_camo_F", "", 315000, -1 },
            { "srifle_GM6_camo_F", "", 300000, 7500 },
            { "srifle_DMR_02_sniper_F", "", 180000, 7500 },
            { "srifle_DMR_05_tan_f", "", 200000 },
            { "launch_RPG32_F", "", 350000, -1 },
            { "APERSTripMine_Wire_Mag", "", 120000 },
            { "DemoCharge_Remote_Mag", "", 230000 },
            { "5Rnd_127x108_Mag", "", 2025 },
            { "150Rnd_93x64_Mag", "", 3025 },
            { "130Rnd_338_Mag", "", 4025 },
            { "10Rnd_338_Mag", "", 445 },
            { "10Rnd_93x64_DMR_05_Mag", "", 405 },
            { "RPG32_HE_F", "", 225000 }
        };
        mags[] = {
            { "5Rnd_127x108_Mag", "", 2025 },
            { "150Rnd_93x64_Mag", "", 3025 },
            { "130Rnd_338_Mag", "", 4025 },
            { "10Rnd_338_Mag", "", 445 },
            { "10Rnd_127x54_Mag", "", 405 },
            { "10Rnd_93x64_DMR_05_Mag", "", 405 },
            { "RPG32_HE_F", "", 125000 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 10500 },
            { "optic_Holosight_smg", "", 2500 },
            { "optic_MRCO", "", 14500 },
            { "optic_Arco", "", 10500 },
            { "optic_KHS_blk", "", 22500 },
            { "optic_AMS", "", 23500 },
            { "optic_DMS", "", 17500 },
            { "optic_SOS", "", 22500 },
            { "optic_NVS", "", 28500 },
            { "optic_LRPS", "", 33500 },
            { "acc_pointer_IR", "", 1500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "FirstAidKit", "Bolsa de Sangue", 250, 65 },
            { "hgun_Pistol_heavy_02_F", "ACP .45", 10500, 2500 },
			{ "hgun_Rook40_FF", "Rook 9mm", 7500, 2500 },
            { "hgun_ACPC2_F", "ACP .45", 7250, 65 },
            { "arifle_TRG20_F", "TRG 5.56mm", 45000, 2500 },
			{ "arifle_TRG21_F", "TRG 5.56mm", 45000, 2500 },
            { "arifle_Katiba_F", "Katiba 6.5mm", 58000, 5000 },
            { "arifle_Katiba_C_F", "Katiba 6.5mm", 58000, 5000 },
            { "arifle_SDAR_F", "SDAR 5.56mm", 25000, 7500 },
            { "SMG_01_F", "Vermin SMG .45ACP", 32000, 7500 },
            { "arifle_Mk20_F", "Mk20 5.56mm", 42000, 7500 },
            { "arifle_Mk20C_F", "Mk20 5.56mm", 42000, 7500 },
            { "arifle_MXC_F", "MXC 6.5 mm", 65000, 7500 },
            { "arifle_MX_F", "MX 6.5 mm", 65000, 7500 },
            { "LMG_Mk200_F", "Mk200 6.5 mm", 150000, 7500 },
			{ "srifle_DMR_01_F", "Rahim 7.62 mm", 75000, 7500 }
        };
        mags[] = {
			{ "6Rnd_45ACP_Cylinder", "Munição 9rnd .45", 725 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 725 },
			{ "11Rnd_45ACP_Mag", "Munição 11rnd .45", 725 },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1725 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd .45", 750 },
            { "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 5950 },
            { "30Rnd_65x39_caseless_green", "Munição 30rnd 6.5mm", 1825 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "Munição 30rnd 5.56mm", 1225 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 1820 }
        };
        accs[] = {
            { "optic_ACO_grn", "Aco", 3500 },
            { "optic_Holosight", "Holosight", 3600 },
            { "optic_Hamr", "Hamr", 10500 },
            { "optic_Holosight_smg", "Holosight Smg", 2500 },
            { "optic_MRCO", "Mrco", 14500 },
            { "optic_Arco", "Arco", 10500 },
            { "acc_pointer_IR", "Laser", 1500 },
            { "acc_flashlight", "Lanterna", 1000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
          { "FirstAidKit", "Bolsa de Sangue", 550, 65 },
          { "hgun_Rook40_F", "Rook 9mm", 9500, 500 },
          { "hgun_Pistol_heavy_02_F", "Heavy .45", 11850, -1 },
          { "hgun_ACPC2_F", "ACP .45", 9500, -1 },
          { "hgun_PDW2000_F", "PDW2000 9 mm", 15000, -1 },
          { "SMG_02_F", "Sting 9 mm", 20000, -1 }
        };
        mags[] = {
          { "16Rnd_9x21_Mag", "Munição 16rnd 9mm", 25 },
          { "6Rnd_45ACP_Cylinder", "Munição 6rnd .45", 50 },
          { "9Rnd_45ACP_Mag", "Munição 9rnd .45", 45 },
          { "30Rnd_9x21_Mag", "Munição 16rnd 9mm", 75 },
          { "11Rnd_45ACP_Mag", "Munição 11rnd .45", 60 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "Aco Smg", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "Binoculos", 150, -1 },
            { "ItemGPS", "GPS", 100, 45 },
            { "ItemMap", "Mapa", 50, 35 },
            { "ItemCompass", "Bússola", 50, 25 },
            { "ItemWatch", "Relogio", 50, -1 },
            { "FirstAidKit", "Bolsa de Sangue", 150, 65 },
            { "NVGoggles", "Night vision", 2000, 980 },
            { "Chemlight_red", "Luz Vermelha", 300, -1 },
            { "Chemlight_yellow", "Luz Amarela", 300, 50 },
            { "Chemlight_green", "Luz Verde", 300, 50 },
            { "Chemlight_blue", "Luz Azul", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "Binoculos", 750, -1 },
            { "ItemGPS", "GPS", 500, 45 },
            { "ItemMap", "Mapa", 250, 35 },
            { "ItemCompass", "Bússola", 250, 25 },
            { "ItemWatch", "Relogio", 250, -1 },
            { "FirstAidKit", "Bolsa de Sangue", 750, 65 },
            { "NVGoggles", "Night vision", 10000, 980 },
            { "Chemlight_red", "Luz Vermelha", 1500, -1 },
            { "Chemlight_yellow", "Luz Amarela", 1500, 50 },
            { "Chemlight_green", "Luz Verde", 1500, 50 },
            { "Chemlight_blue", "Luz Azul", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_recruta {
        name = "Altis Recruta Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_MXC_Black_F", "Rifle Tazer", 10000, 750 },
			{ "SMG_02_F", "Sting 9 mm", 15000, 750 },
			{ "PDW2000 9 mm", "Submachine 9x21 mm", 13000, 750 },
            { "hgun_P07_snds_F", "Pistola Tazer", 200, 60 },
            { "hgun_P07_F", "P07 9mm", 750, 150 },
            { "NVGoggles", "Night vision", 200, 90 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munição 16rnd 9mm", 25 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 25 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Stun Magazine", 45 }
        };
        accs[] = {
            { "acc_pointer_IR", "Laser", 1660 },
            { "optic_Holosight", "Holosight", 1120, 20 },
			{ "acc_flashlight", "Lanterna", 120, 20 },
			{ "optic_Aco", "Aco", 120, 20 }
        };
    };

    class cop_soldado {
        name = "Altis Soldado Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Voce precisa ser Soldado para acessar essa loja!" };
        items[] = {
            { "arifle_MXC_Black_F", "Rifle Tazer", 10000, 750 },
			{ "arifle_TRG21_F", "TRG-21 5.56 mm", 15000, 750 },
			{ "arifle_TRG20_F", "TRG-20 5.56 mm", 15000, 750 },
			{ "arifle_Mk20_F", "Mk20 5.56 mm", 15000, 750 },
			{ "arifle_Mk20C_F", "Mk20C 5.56 mm", 15000, 750 },
            { "SMG_02_F", "Sting 9 mm", 14000, 750 },
			{ "PDW2000 9 mm", "Submachine 9x21 mm", 12000, 750 },
            { "hgun_P07_snds_F", "Pistola Tazer", 200, 60 },
            { "hgun_P07_F", "P07 9mm", 750, 150 },
            { "FirstAidKit", "Bolsa de Sangue", 50, 5 },
            { "NVGoggles", "Night vision", 200, 90 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag_Tracer", "Stun Magazine 30rnd", 45 },
            { "16Rnd_9x21_Mag", "Munição 16rnd 9mm", 25 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 25 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 25 }
        };
        accs[] = {
            { "acc_flashlight", "Lanterna", 750 },
            { "optic_Holosight", "Holosight", 120 },
            { "optic_Arco", "Arco", 250 },
            { "acc_pointer_IR", "Laser", 275 }
        };
    };

    class cop_cabo {
        name = "Altis Cabo Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Voce precisa ser Cabo para acessar essa loja!" };
        items[] = {
            { "arifle_MXC_Black_F", "Rifle Tazer", 9000, 750 },
			{ "arifle_TRG21_F", "TRG-21 5.56 mm", 13000, 750 },
			{ "arifle_TRG20_F", "TRG-20 5.56 mm", 13000, 750 },
			{ "LMG_Mk200_F", "Mk200 6.5 mm", 50000, 750 },
			{ "arifle_MXC_F", "MXC 6.5 mm", 20000, 750 },
			{ "arifle_MX_F", "MX 6.5 mm", 20000, 750 },
			{ "arifle_Mk20_F", "Mk20 5.56 mm", 13000, 750 },
			{ "arifle_Mk20C_F", "Mk20C 5.56 mm", 13000, 750 },
            { "SMG_02_F", "Sting 9 mm", 11000, 750 },
			{ "PDW2000 9 mm", "Submachine 9x21 mm", 10000, 750 },
            { "hgun_P07_snds_F", "Pistola Tazer", 2500, 60 },
            { "hgun_P07_F", "P07 9mm", 4750, 150 },
            { "FirstAidKit", "Bolsa de Sangue", 50, 5 },
            { "NVGoggles", "Night vision", 200, 90 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munição 16rnd 9mm", 25 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 25 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 25 },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 25 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 10 }
        };
        accs[] = {
            { "acc_flashlight", "Lanterna", 750 },
            { "optic_Holosight", "Holosight", 120 },
            { "optic_Arco", "Arco", 250 },
            { "acc_pointer_IR", "Laser", 275 },
			{ "optic_MRCO", "Mrco", 275 },
			{ "optic_Hamr", "Hamr", 275 }
        };
    };

    class cop_SWAT {
        name = "Altis SWAT Shop";
        side = "cop";
        license = "swat";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be atleast Sergeant rank and SWAT!" };
        items[] = {
            { "srifle_GM6_F", "", 17500, -1 },
            { "LMG_Zafir_F", "", 15000, -1 },
            { "arifle_MX_GL_Black_F", "", 5000, -1 },
            { "launch_RPG32_F", "", 150000, -1 },
            { "HandGrenade_Stone", "Flashbang", 170, -1 },
            { "optic_MRCO", "", 1450 },
            { "optic_Arco", "", 1050 },
            { "optic_KHS_blk", "", 2250 },
            { "optic_AMS", "", 2350 },
            { "optic_DMS", "", 1750 },
            { "optic_SOS", "", 2250 },
            { "optic_NVS", "", 2850 },
            { "optic_LRPS", "", 3350 },
            { "muzzle_snds_B", "", 275 },
            { "bipod_01_F_blk", "", 1250 },
            { "bipod_02_F_blk", "", 1200 },
            { "bipod_03_F_blk", "", 1250 },
            { "1Rnd_SmokeGreen_Grenade_shell", "Tear Gas", 150 },
            { "RPG32_HE_F", "", 15000 }
        };
        mags[] = {
            { "5Rnd_127x108_Mag", "", 100 },
            { "150Rnd_762x54_Box_Tracer", "", 40 },
            { "5Rnd_127x108_APDS_Mag", "", 300 }
        };
        accs[] = {
            { "optic_Arco", "", 250 },
            { "optic_MRCO", "", 350, -1 },
            { "muzzle_snds_B", "", 275 }
        };
    };

    class cop_sargento {
        name = "Altis Sargento Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "Voce precisa ser Sargento para acessar essa loja!" };
        items[] = {
            { "arifle_MXC_Black_F", "Rifle Tazer", 8000, 750 },
			{ "arifle_TRG21_F", "TRG-21 5.56 mm", 12000, 750 },
			{ "arifle_TRG20_F", "TRG-20 5.56 mm", 12000, 750 },
			{ "LMG_Mk200_F", "Mk200 6.5 mm", 48000, 750 },
			{ "arifle_MXC_F", "MXC 6.5 mm", 18000, 750 },
			{ "arifle_MXM_Black_F", "MXM 6.5 mm", 18000, 750 },
			{ "arifle_MX_SW_Black_F", "MX 6.5 mm", 48000, 750 },
			{ "arifle_MX_Black_F", "MX 6.5 mm", 18000, 750 },
			{ "arifle_Mk20_F", "Mk20 5.56 mm", 12000, 750 },
			{ "arifle_Mk20C_F", "Mk20C 5.56 mm", 12000, 750 },
            { "SMG_02_F", "Sting 9 mm", 10000, 750 },
			{ "PDW2000 9 mm", "Submachine 9x21 mm", 9000, 750 },
            { "hgun_P07_snds_F", "Pistola Tazer", 1500, 60 },
            { "hgun_P07_F", "P07 9mm", 3750, 150 },
            { "FirstAidKit", "Bolsa de Sangue", 50, 5 },
            { "Rangefinder", "Rangefinder", 12200, 90 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munição 16rnd 9mm", 25 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 25 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 25 },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 25 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "Munição 100rnd 6.5mm", 25 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 10 }
        };
        accs[] = {
            { "acc_flashlight", "Lanterna", 750 },
            { "optic_Holosight", "Holosight", 120 },
            { "optic_Arco", "Arco", 250 },
            { "acc_pointer_IR", "Laser", 275 },
			{ "optic_MRCO", "Mrco", 275 },
			{ "optic_DMS", "DMS", 275 },
			{ "optic_Hamr", "Hamr", 275 },
			{ "muzzle_snds_Lt", "Silenciador 9mm", 750 },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 750 }
        };
    };

    class cop_tenente {
        name = "Altis Tenente Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "Voce precisa ser Tenente para acessar essa loja!" };
        items[] = {
            { "arifle_MXC_Black_F", "Rifle Tazer", 80000, 750 },
			{ "arifle_TRG21_F", "TRG-21 5.56 mm", 11000, 750 },
			{ "arifle_TRG20_F", "TRG-20 5.56 mm", 11000, 750 },
			{ "LMG_Mk200_F", "Mk200 6.5 mm", 45000, 750 },
			{ "arifle_MXC_F", "MXC 6.5 mm", 17000, 750 },
			{ "arifle_MXM_Black_F", "MXM 6.5 mm", 17000, 750 },
			{ "arifle_MX_SW_Black_F", "MX 6.5 mm", 45000, 750 },
			{ "srifle_EBR_F", "Mk18 ABR 7.62 mm", 45000, 750 },
			{ "arifle_MX_Black_F", "MX 6.5 mm", 17000, 750 },
			{ "arifle_Mk20_F", "Mk20 5.56 mm", 11000, 750 },
			{ "arifle_Mk20C_F", "Mk20C 5.56 mm", 11000, 750 },
            { "SMG_02_F", "Sting 9 mm", 9000, 750 },
			{ "PDW2000 9 mm", "Submachine 9x21 mm", 9000, 750 },
            { "hgun_P07_snds_F", "Pistola Tazer", 1500, 60 },
            { "hgun_P07_F", "P07 9mm", 3750, 150 },
            { "FirstAidKit", "Bolsa de Sangue", 50, 5 },
            { "Rangefinder", "Rangefinder", 12200, 90 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munição 16rnd 9mm", 25 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 25 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 25 },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 25 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "Munição 100rnd 6.5mm", 25 },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 25 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 10 }
        };
        accs[] = {
            { "acc_flashlight", "Lanterna", 750 },
            { "optic_Holosight", "Holosight", 120 },
            { "optic_Arco", "Arco", 250 },
            { "acc_pointer_IR", "Laser", 275 },
			{ "optic_MRCO", "Mrco", 275 },
			{ "optic_DMS", "DMS", 275 },
			{ "optic_Hamr", "Hamr", 275 },
			{ "muzzle_snds_Lt", "Silenciador 9mm", 750 },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 750 },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 750 }
        };
    };
	
	class cop_capitao {
        name = "Altis Capitão Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "Voce precisa ser Capitão para acessar essa loja!" };
        items[] = {
            { "arifle_MXC_Black_F", "Rifle Tazer", 8000, 750 },
			{ "arifle_TRG21_F", "TRG-21 5.56 mm", 10000, 750 },
			{ "arifle_TRG20_F", "TRG-20 5.56 mm", 10000, 750 },
			{ "LMG_Mk200_F", "Mk200 6.5 mm", 40000, 750 },
			{ "arifle_MXC_F", "MXC 6.5 mm", 16000, 750 },
			{ "arifle_MXM_Black_F", "MXM 6.5 mm", 16000, 750 },
			{ "arifle_MX_SW_Black_F", "MX 6.5 mm", 40000, 750 },
			{ "srifle_EBR_F", "Mk18 ABR 7.62 mm", 45000, 750 },
			{ "arifle_MX_Black_F", "MX 6.5 mm", 16000, 750 },
			{ "arifle_Mk20_F", "Mk20 5.56 mm", 10000, 750 },
			{ "arifle_Mk20C_F", "Mk20C 5.56 mm", 10000, 750 },
            { "SMG_02_F", "Sting 9 mm", 8000, 750 },
			{ "PDW2000 9 mm", "Submachine 9x21 mm", 8000, 750 },
            { "hgun_P07_snds_F", "Pistola Tazer", 1500, 60 },
            { "hgun_P07_F", "P07 9mm", 3750, 150 },
            { "FirstAidKit", "Bolsa de Sangue", 50, 5 },
            { "Rangefinder", "Rangefinder", 12200, 90 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munição 16rnd 9mm", 25 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 25 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 25 },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 25 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "Munição 100rnd 6.5mm", 25 },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 25 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 10 }
        };
        accs[] = {
            { "acc_flashlight", "Lanterna", 750 },
            { "optic_Holosight", "Holosight", 120 },
            { "optic_Arco", "Arco", 250 },
            { "acc_pointer_IR", "Laser", 275 },
			{ "optic_MRCO", "Mrco", 275 },
			{ "optic_DMS", "DMS", 275 },
			{ "optic_Hamr", "Hamr", 275 },
			{ "muzzle_snds_Lt", "Silenciador 9mm", 750 },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 750 },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 750 }
        };
    };
	
	class cop_major {
        name = "Altis Major Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "Voce precisa ser Major para acessar essa loja!" };
        items[] = {
            { "arifle_MXC_Black_F", "Rifle Tazer", 7000, 750 },
			{ "arifle_TRG21_F", "TRG-21 5.56 mm", 9000, 750 },
			{ "arifle_TRG20_F", "TRG-20 5.56 mm", 9000, 750 },
			{ "LMG_Mk200_F", "Mk200 6.5 mm", 35000, 750 },
			{ "arifle_MXC_F", "MXC 6.5 mm", 15000, 750 },
			{ "arifle_MXM_Black_F", "MXM 6.5 mm", 15000, 750 },
			{ "arifle_MX_SW_Black_F", "MX 6.5 mm", 35000, 750 },
			{ "srifle_EBR_F", "Mk18 ABR 7.62 mm", 40000, 750 },
			{ "arifle_MX_Black_F", "MX 6.5 mm", 16000, 750 },
			{ "arifle_Mk20_F", "Mk20 5.56 mm", 9000, 750 },
			{ "arifle_Mk20C_F", "Mk20C 5.56 mm", 9000, 750 },
            { "SMG_02_F", "Sting 9 mm", 7000, 750 },
			{ "srifle_DMR_06_camo_F", "Mk14 7.62mm", 65000, 750 },
			{ "PDW2000 9 mm", "Submachine 9x21 mm", 7000, 750 },
            { "hgun_P07_snds_F", "Pistola Tazer", 1500, 60 },
            { "hgun_P07_F", "P07 9mm", 3750, 150 },
            { "FirstAidKit", "Bolsa de Sangue", 50, 5 },
            { "Rangefinder", "Rangefinder", 12200, 90 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munição 16rnd 9mm", 25 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 25 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 25 },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 25 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "Munição 100rnd 6.5mm", 25 },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 25 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 10 }
        };
        accs[] = {
            { "acc_flashlight", "Lanterna", 750 },
            { "optic_Holosight", "Holosight", 120 },
            { "optic_Arco", "Arco", 250 },
            { "acc_pointer_IR", "Laser", 275 },
			{ "optic_MRCO", "Mrco", 275 },
			{ "optic_DMS", "DMS", 275 },
			{ "optic_Hamr", "Hamr", 275 },
			{ "muzzle_snds_Lt", "Silenciador 9mm", 750 },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 750 },
			{ "muzzle_snds_B", "Silenciador 7.62mm", 750 },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 750 }
        };
    };
	
class cop_tenente_coronel {
        name = "Altis Major Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "Voce precisa ser Major para acessar essa loja!" };
        items[] = {
            { "arifle_MXC_Black_F", "Rifle Tazer", 7000, 750 },
			{ "arifle_TRG21_F", "TRG-21 5.56 mm", 9000, 750 },
			{ "arifle_TRG20_F", "TRG-20 5.56 mm", 9000, 750 },
			{ "LMG_Mk200_F", "Mk200 6.5 mm", 35000, 750 },
			{ "arifle_MXC_F", "MXC 6.5 mm", 15000, 750 },
			{ "arifle_MXM_Black_F", "MXM 6.5 mm", 15000, 750 },
			{ "arifle_MX_SW_Black_F", "MX 6.5 mm", 35000, 750 },
			{ "srifle_EBR_F", "Mk18 ABR 7.62 mm", 40000, 750 },
			{ "srifle_DMR_06_camo_F", "Mk14 7.62mm", 65000, 750 },
			{ "arifle_MX_Black_F", "MX 6.5 mm", 16000, 750 },
			{ "arifle_Mk20_F", "Mk20 5.56 mm", 9000, 750 },
			{ "arifle_Mk20C_F", "Mk20C 5.56 mm", 9000, 750 },
            { "SMG_02_F", "Sting 9 mm", 7000, 750 },
			{ "srifle_DMR_03_F", "Mk-I EMR 7.62mm", 65000, 750 },
			{ "PDW2000 9 mm", "Submachine 9x21 mm", 7000, 750 },
            { "hgun_P07_snds_F", "Pistola Tazer", 1500, 60 },
            { "hgun_P07_F", "P07 9mm", 3750, 150 },
            { "FirstAidKit", "Bolsa de Sangue", 50, 5 },
            { "Rangefinder", "Rangefinder", 12200, 90 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munição 16rnd 9mm", 25 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 25 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 25 },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 25 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "Munição 100rnd 6.5mm", 25 },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 25 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 10 }
        };
        accs[] = {
            { "acc_flashlight", "Lanterna", 750 },
            { "optic_Holosight", "Holosight", 120 },
            { "optic_Arco", "Arco", 250 },
            { "acc_pointer_IR", "Laser", 275 },
			{ "optic_MRCO", "Mrco", 275 },
			{ "optic_DMS", "DMS", 275 },
			{ "optic_Hamr", "Hamr", 275 },
			{ "muzzle_snds_Lt", "Silenciador 9mm", 750 },
			{ "muzzle_snds_B", "Silenciador 7.62mm", 750 },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 750 },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 750 }
        };
    };
	
	class cop_coronel {
        name = "Altis Major Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "Voce precisa ser Major para acessar essa loja!" };
        items[] = {
            { "arifle_MXC_Black_F", "Rifle Tazer", 7000, 750 },
			{ "arifle_TRG21_F", "TRG-21 5.56 mm", 9000, 750 },
			{ "arifle_TRG20_F", "TRG-20 5.56 mm", 9000, 750 },
			{ "LMG_Mk200_F", "Mk200 6.5 mm", 35000, 750 },
			{ "arifle_MXC_F", "MXC 6.5 mm", 15000, 750 },
			{ "LMG_Zafir_F", "Zafir 7.62 mm", 100000, 750 },
			{ "arifle_MXM_Black_F", "MXM 6.5 mm", 15000, 750 },
			{ "arifle_MX_SW_Black_F", "MX 6.5 mm", 35000, 750 },
			{ "srifle_EBR_F", "Mk18 ABR 7.62 mm", 40000, 750 },
			{ "srifle_DMR_06_camo_F", "Mk14 7.62mm", 65000, 750 },
			{ "arifle_MX_Black_F", "MX 6.5 mm", 16000, 750 },
			{ "arifle_Mk20_F", "Mk20 5.56 mm", 9000, 750 },
			{ "arifle_Mk20C_F", "Mk20C 5.56 mm", 9000, 750 },
            { "SMG_02_F", "Sting 9 mm", 7000, 750 },
			{ "srifle_DMR_03_F", "Mk-I EMR 7.62mm", 65000, 750 },
			{ "PDW2000 9 mm", "Submachine 9x21 mm", 7000, 750 },
            { "hgun_P07_snds_F", "Pistola Tazer", 1500, 60 },
            { "hgun_P07_F", "P07 9mm", 3750, 150 },
            { "FirstAidKit", "Bolsa de Sangue", 50, 5 },
            { "Rangefinder", "Rangefinder", 12200, 90 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munição 16rnd 9mm", 25 },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 25 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 25 },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 25 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "Munição 100rnd 6.5mm", 25 },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 25 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 10 }
        };
        accs[] = {
            { "acc_flashlight", "Lanterna", 750 },
            { "optic_Holosight", "Holosight", 120 },
            { "optic_Arco", "Arco", 250 },
            { "acc_pointer_IR", "Laser", 275 },
			{ "optic_MRCO", "Mrco", 275 },
			{ "optic_DMS", "DMS", 275 },
			{ "optic_Hamr", "Hamr", 275 },
			{ "muzzle_snds_Lt", "Silenciador 9mm", 750 },
			{ "muzzle_snds_B", "Silenciador 7.62mm", 750 },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 750 },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 750 }
        };
    };
	
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 50, 65 },
            { "Medikit", "", 55, 35 },
            { "NVGoggles", "", 120, 80 }
        };
        mags[] = {};
        accs[] = {};
    };
};