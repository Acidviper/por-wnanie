/*
*    Format:
*        licenses: ARRAY (This is for limiting spawn to certain things)
*           0: License Name
*           1: License Check Type
*                false: If license isn't set
*                true: If license is set
*           Example:
*                licenses[] = { { "pilot", true }, { "rebel", false } }; //Shows up for players with pilot and without rebel license.
*
*        level: ARRAY (This is for limiting spawn to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / INVERSE)
*                SCALAR: VALUE => VALUE
*                BOOL: VALUE EXISTS
*                EQUAL: VALUE isEqualTo VALUE
*                INVERSE: VALUE <= VALUE
*            2: What to compare to (-1 = Check Disabled)
*
*/
class CfgSpawnPoints {
    class Civilian {
		
		class AreaVIP {
            displayName = "Área VIP";
            spawnMarker = "civ_spawn_vip";
            icon = "icons\civspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "life_donorlevel", "SCALAR", 1 };
        };
		
        class Kavala {
            displayName = "Kavala";
            spawnMarker = "civ_spawn_1";
            icon = "icons\civspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Athira";
            spawnMarker = "civ_spawn_3";
            icon = "icons\civspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Pyrgos";
            spawnMarker = "civ_spawn_2";
            icon = "icons\civspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Sofia {
            displayName = "Sofia";
            spawnMarker = "civ_spawn_4";
            icon = "icons\civspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class RebelS {
            displayName = "Base Rebelde Norte";
            spawnMarker = "Rebelop";
            icon = "icons\civspawn.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

        class RebelN {
            displayName = "Base Rebelde Sul";
            spawnMarker = "Rebelop_1";
            icon = "icons\civspawn.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

        class RebelE {
            displayName = "Base Rebelde Leste";
            spawnMarker = "Rebelop_2";
            icon = "icons\civspawn.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };
    };

    class Cop {
        class Kavala {
            displayName = "Kavala HQ";
            spawnMarker = "cop_spawn_1";
            icon = "icons\policespawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Athira HQ";
            spawnMarker = "cop_spawn_3";
            icon = "icons\policespawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Pyrgos HQ";
            spawnMarker = "cop_spawn_2";
            icon = "icons\policespawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Air {
            displayName = "Air HQ";
            spawnMarker = "cop_spawn_4";
            icon = "icons\policespawn.paa";
            licenses[] = { { "cAir", true } };
            level[] = { "", "", -1 };
        };

        class HW {
            displayName = "Sofia HQ";
            spawnMarker = "cop_spawn_9";
            icon = "icons\policespawn.paa";
            licenses[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 2 };
        };

        class Syrta {
            displayName = "Syrta HQ";
            spawnMarker = "cop_spawn_6";
            icon = "icons\policespawn.paa";
            licenses[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 2 };
        };

        class Training {
            displayName = "Treino HQ";
            spawnMarker = "cop_spawn_7";
            icon = "icons\policespawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };

    class Medic {
        class Kavala {
            displayName = "Kavala Hospital";
            spawnMarker = "medic_spawn_1";
            icon = "icons\medspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Athira Regional";
            spawnMarker = "medic_spawn_2";
            icon = "icons\medspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Pyrgos Hospital";
            spawnMarker = "medic_spawn_3";
            icon = "icons\medspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };
};
