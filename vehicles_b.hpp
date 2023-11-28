// Vehicles - BLUFOR

    // Offroad HMG
    class B_CA2035PMC_Offroad_01_armed_F : I_CA2035PMC_Offroad_01_armed_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "BLU_CA2035PMC";
        side = 1;
        crew = "B_CA2035PMC_Soldier_lite_F";
    };

    // Offroad (Covered)
    class B_CA2035PMC_Offroad_01_covered_F : I_CA2035PMC_Offroad_01_covered_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "BLU_CA2035PMC";
        side = 1;
        crew = "B_CA2035PMC_Soldier_lite_F";

        typicalCargo[]=
        {
            "B_CA2035PMC_Soldier_lite_F"
        };
    };

    // Quadbike
    class B_CA2035PMC_Quad_Bike_F : I_CA2035PMC_Quad_Bike_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "BLU_CA2035PMC";
        side = 1;
        crew = "B_CA2035PMC_Soldier_lite_F";
    };

    // M-900
    class B_CA2035PMC_Heli_Light_01_F : I_CA2035PMC_Heli_Light_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "BLU_CA2035PMC";
        side = 1;
        crew = "B_CA2035PMC_HeliPilot_F";
    };

    // Assault boat
    class B_CA2035PMC_Boat_Transport_01_F : I_CA2035PMC_Boat_Transport_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "BLU_CA2035PMC";
        side = 1;
        crew = "B_CA2035PMC_Soldier_lite_F";
        
        typicalCargo[]=
        {
            "B_CA2035PMC_Soldier_lite_F"
        };
    };

    // MK6 Mortar
    class B_CA2035PMC_Mortar_01_F : I_CA2035PMC_Mortar_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "BLU_CA2035PMC";
        side = 1;
        crew = "B_CA2035PMC_Soldier_lite_F";
    };

    // HMG 50
    class B_CA2035PMC_HMG_02_F : I_CA2035PMC_HMG_02_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "BLU_CA2035PMC";
        side = 1;
        crew = "B_CA2035PMC_Soldier_lite_F";
    };

    // HMG 50 Raised
    class B_CA2035PMC_HMG_02_high_F : I_CA2035PMC_HMG_02_high_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "BLU_CA2035PMC";
        side = 1;
        crew = "B_CA2035PMC_Soldier_lite_F";
    };

    // Static Titan Launcher (AT)
    class B_CA2035PMC_static_AT_F : I_CA2035PMC_static_AT_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "BLU_CA2035PMC";
        side = 1;
        crew = "B_CA2035PMC_Soldier_lite_F";
    };

    // AR-2 Darter
    class B_CA2035PMC_UAV_01_F : I_CA2035PMC_UAV_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "BLU_CA2035PMC";
        side = 1;
        crew="B_UAV_AI";

        typicalCargo[]=
        {
            "B_UAV_AI"
        };

        class assembleInfo
        {
            primary=1;
            base="";
            assembleTo="";
            displayName="";
            dissasembleTo[]=
            {
                "B_CA2035PMC_UAV_01_backpack_F"
            };
        };
    };

    // UGV Stomper RCWS
    class B_CA2035PMC_UGV_01_rcws_F : I_CA2035PMC_UGV_01_rcws_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "BLU_CA2035PMC";
        side = 1;
        crew="B_UAV_AI";

        typicalCargo[]=
        {
            "B_CA2035PMC_Soldier_lite_F"
        };
    };