// Vehicles - OPFOR

    // Offroad HMG
    class O_CA2035PMC_Offroad_01_armed_F : I_CA2035PMC_Offroad_01_armed_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_CA2035PMC";
        side = 0;
        crew = "O_CA2035PMC_Soldier_lite_F";
    };

    // Offroad (Covered)
    class O_CA2035PMC_Offroad_01_covered_F : I_CA2035PMC_Offroad_01_covered_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_CA2035PMC";
        side = 0;
        crew = "O_CA2035PMC_Soldier_lite_F";

        typicalCargo[]=
        {
            "O_CA2035PMC_Soldier_lite_F"
        };
    };

    // Quadbike
    class O_CA2035PMC_Quad_Bike_F : I_CA2035PMC_Quad_Bike_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_CA2035PMC";
        side = 0;
        crew = "O_CA2035PMC_Soldier_lite_F";
    };

    // M-900
    class O_CA2035PMC_Heli_Light_01_F : I_CA2035PMC_Heli_Light_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_CA2035PMC";
        side = 0;
        crew = "O_CA2035PMC_HeliPilot_F";
    };

    // Assault boat
    class O_CA2035PMC_Boat_Transport_01_F : I_CA2035PMC_Boat_Transport_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_CA2035PMC";
        side = 0;
        crew = "O_CA2035PMC_Soldier_lite_F";
        
        typicalCargo[]=
        {
            "O_CA2035PMC_Soldier_lite_F"
        };
    };

    // MK6 Mortar
    class O_CA2035PMC_Mortar_01_F : I_CA2035PMC_Mortar_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_CA2035PMC";
        side = 0;
        crew = "O_CA2035PMC_Soldier_lite_F";
    };

    // HMG 50
    class O_CA2035PMC_HMG_02_F : I_CA2035PMC_HMG_02_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_CA2035PMC";
        side = 0;
        crew = "O_CA2035PMC_Soldier_lite_F";
    };

    // HMG 50 Raised
    class O_CA2035PMC_HMG_02_high_F : I_CA2035PMC_HMG_02_high_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_CA2035PMC";
        side = 0;
        crew = "O_CA2035PMC_Soldier_lite_F";
    };

    // Static Titan Launcher (AT)
    class O_CA2035PMC_static_AT_F : I_CA2035PMC_static_AT_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_CA2035PMC";
        side = 0;
        crew = "O_CA2035PMC_Soldier_lite_F";
    };

    // AR-2 Darter
    class O_CA2035PMC_UAV_01_F : I_CA2035PMC_UAV_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_CA2035PMC";
        side = 0;
        crew="O_UAV_AI";

        typicalCargo[]=
        {
            "O_UAV_AI"
        };

        class assembleInfo
        {
            primary=1;
            base="";
            assembleTo="";
            displayName="";
            dissasembleTo[]=
            {
                "O_CA2035PMC_UAV_01_backpack_F"
            };
        };
    };

    // UGV Stomper RCWS
    class O_CA2035PMC_UGV_01_rcws_F : I_CA2035PMC_UGV_01_rcws_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_CA2035PMC";
        side = 0;
        crew="O_UAV_AI";

        typicalCargo[]=
        {
            "O_CA2035PMC_Soldier_lite_F"
        };
    };