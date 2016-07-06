/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*	};
*
*/

class ProcessAction {

	class oil {

        	MaterialsReq[] = {{"oil_unprocessed",1}};
		MaterialsGive[] = {{"oil_processed",1}};
        	Text = "STR_Process_Oil";
        	//ScrollText = "Process Oil";
        	NoLicenseCost = 63750;
	};

	class diamond {

        	MaterialsReq[] = {{"diamond_uncut",1}};
					MaterialsGive[] = {{"diamond_cut",1}};
        	Text = "STR_Process_Diamond";
	 	//ScrollText = "Cut Diamonds";
        	NoLicenseCost = 100000;
	};

	class heroin {

        	MaterialsReq[] = {{"heroin_unprocessed",1}};
		MaterialsGive[] = {{"heroin_processed",1}};
        	Text = "STR_Process_Heroin";
        	//ScrollText = "Process Heroin";
        	NoLicenseCost = 60000;
	};

	class copper {

        	MaterialsReq[] = {{"copper_unrefined",1}};
		MaterialsGive[] = {{"copper_refined",1}};
        	Text = "STR_Process_Copper";
        	//ScrollText = "Refine Copper";
        	NoLicenseCost = 14250;
	};

	class iron {

        	MaterialsReq[] = {{"iron_unrefined",1}};
		MaterialsGive[] = {{"iron_refined",1}};
        	Text = "STR_Process_Iron";
        	//ScrollText = "Refine Iron";
        	NoLicenseCost = 24150;
	};

	class sand {

        	MaterialsReq[] = {{"sand",1}};
		MaterialsGive[] = {{"glass",1}};
        	Text = "STR_Process_Sand";
        	//ScrollText = "Melt Sand into Glass";
        	NoLicenseCost = 13650;
	};

	class salt {

        	MaterialsReq[] = {{"salt_unrefined",1}};
		MaterialsGive[] = {{"salt_refined",1}};
        	Text = "STR_Process_Salt";
        	//ScrollText = "Refine Salt";
        	NoLicenseCost = 13500;
	};

	class cocaine {

        	MaterialsReq[] = {{"cocaine_unprocessed",1}};
		MaterialsGive[] = {{"cocaine_processed",1}};
		Text = "STR_Process_Cocaine";
        	//ScrollText = "Process Cocaine";
        	NoLicenseCost = 80000;
	};

	class marijuana {

        	MaterialsReq[] = {{"cannabis",1}};
		MaterialsGive[] = {{"marijuana",1}};
        	Text = "STR_Process_Marijuana";
        	//ScrollText = "Harvest Marijuana";
        	NoLicenseCost = 55500;
	};
       class heba {

        	MaterialsReq[] = {{"cannabis",1},{"nitroamine",1}};
		MaterialsGive[] = {{"heba",1}};
        	Text = "STR_Process_heba";
        	//ScrollText = "Tabsy Diabła";
        	NoLicenseCost = 25500;
	};
	class cement {

        	MaterialsReq[] = {{"rock",1}};
		MaterialsGive[] = {{"cement",1}};
        	Text = "STR_Process_Cement";
        	//ScrollText = "Mix Cement";
        	NoLicenseCost = 14500;
	};

	class woodP {

        	MaterialsReq[] = {{"wood",1}};
					MaterialsGive[] = {{"plank",1}};
        	Text = "STR_Process_plank";
        	//ScrollText = "Mix Cement";
        	NoLicenseCost = 16500;
	};

	//Custom

	class rubber {

					MaterialsReq[] = {{"rubberU",1}};
		MaterialsGive[] = {{"rubber",1}};
					Text = "STR_Process_rubber";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 15500;
	};

	class gunpowder {

					MaterialsReq[] = {{"sulfur",1}};
		MaterialsGive[] = {{"gunpowder",1}};
					Text = "STR_Process_gunpowder";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 16500;
	};

	class C4 {

					MaterialsReq[] = {{"nitroamine",1}};
		MaterialsGive[] = {{"C4",1}};
					Text = "STR_Process_C4";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 111500;
	};

	class steelplate {

					MaterialsReq[] = {{"steel",1}};
		MaterialsGive[] = {{"steelplate",1}};
					Text = "STR_Process_steelplate";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 27500;
	};

	class cloth {

					MaterialsReq[] = {{"wool",1}};
		MaterialsGive[] = {{"cloth",1}};
					Text = "STR_Process_cloth";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 11500;
	};

};
