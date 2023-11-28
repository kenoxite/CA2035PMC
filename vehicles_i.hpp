// Vehicles - Independent

    // Offroad HMG
    class I_G_Offroad_01_armed_F;
    class I_CA2035PMC_Offroad_01_armed_F : I_G_Offroad_01_armed_F {
        author = "kenoxite";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Offroad_01_armed_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035PMC";
        side = 2;
        crew = "I_CA2035PMC_Soldier_lite_F";

        typicalCargo[]=
        {
            "I_CA2035PMC_Soldier_lite_F"
        };

        hiddenSelections[]=
        {
            "Camo",
            "Camo1"
        };

        hiddenSelectionsTextures[] =
        {
            "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa",
            "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa"
        };

        textureList[]=
        {
            "CA2035PMC",
            1
        };
        class TextureSources
        {
            class CA2035PMC
            {
                author="kenoxite";
                displayName="PMC (Central Africa)";
                factions[]=
                {
                    "IND_CA2035PMC",
                    "BLU_CA2035PMC",
                    "OPF_CA2035PMC"
                };
                textures[]=
                {
                    "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa",
                    "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa"
                };
            };
        };
        
        animationList[]=
        {
            "HideBumper1",
            1,
            "HideBumper2",
            0,
            "HideDoor1",
            0,
            "HideDoor2",
            0,
            "HideDoor3",
            0.3,
            "HideBackpacks",
            1,
            "Hide_Shield",
            1,
            "Hide_Rail",
            0
        };

        class TransportBackpacks
        {
            bag_xx(B_AssaultPack_khk,1);
        };
        class TransportItems
        {
            item_xx(FirstAidKit,4);
            item_xx(Medikit,1);
            item_xx(ToolKit,1);
        };
        class TransportMagazines
        {
            mag_xx(30Rnd_556x45_Stanag_green,12);
            mag_xx(HandGrenade,6);
            mag_xx(SmokeShell,6);
        };
        class TransportWeapons
        {
            weap_xx(arifle_SPAR_01_trp_holo_F,1);
        };
    };

    // Offroad (Covered)
    class I_E_Offroad_01_covered_F;
    class I_CA2035PMC_Offroad_01_covered_F : I_E_Offroad_01_covered_F {
        author = "kenoxite";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Offroad_01_covered_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035PMC";
        side = 2;
        crew = "I_CA2035PMC_Soldier_lite_F";

        typicalCargo[]=
        {
            "I_CA2035PMC_Soldier_lite_F"
        };

        hiddenSelections[] = {
            "Camo",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[] =
        {
            "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa",
            "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa",
            "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"
        };

        textureList[]=
        {
            "CA2035PMC",
            1
        };
        class TextureSources
        {
            class CA2035PMC
            {
                author="kenoxite";
                displayName="PMC (Central Africa)";
                factions[]=
                {
                    "IND_CA2035PMC",
                    "BLU_CA2035PMC",
                    "OPF_CA2035PMC"
                };
                textures[]=
                {
                    "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa",
                    "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa",
                    "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"
                };
            };
        };
        // animationList[] = {
        //     "HideRoofRack",
        //     0,
        //     "HideCover",
        //     0,
        //     "HideBumper1",
        //     1,
        //     "HideBumper2",
        //     0,
        //     "HideDoor1",
        //     0,
        //     "HideDoor2",
        //     0,
        //     "HideDoor3",
        //     0,
        //     "HideBackpacks",
        //     1,
        //     "Hide_Shield",
        //     1,
        //     "Hide_Rail",
        //     0
        // };

        class TransportBackpacks
        {
            bag_xx(B_AssaultPack_khk,1);
        };
        class TransportItems
        {
            item_xx(FirstAidKit,4);
            item_xx(Medikit,1);
            item_xx(ToolKit,1);
        };
        class TransportMagazines
        {
            mag_xx(30Rnd_556x45_Stanag_green,12);
            mag_xx(HandGrenade,6);
            mag_xx(SmokeShell,6);
        };
        class TransportWeapons
        {
            weap_xx(arifle_SPAR_01_trp_holo_F,1);
        };
    };

    // Quadbike
    class I_CA2035_T_Quad_Bike_F;
    class I_CA2035PMC_Quad_Bike_F : I_CA2035_T_Quad_Bike_F {
        author = "kenoxite";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Quad_Bike_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035PMC";
        side = 2;
        crew = "I_CA2035PMC_Soldier_lite_F";

        hiddenSelectionsTextures[] =
        {
            "\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa",
            "\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"
        };

        textureList[]=
        {
            "CA2035PMC",
            1
        };

        class TextureSources
        {

            class CA2035PMC
            {
                author="kenoxite";
                displayName="PMC (Central Africa)";
                factions[]=
                {
                    "IND_CA2035PMC",
                    "BLU_CA2035PMC",
                    "OPF_CA2035PMC"
                };
                textures[]=
                {
                    "\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa",
                    "\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"
                };
            };
        };

        class TransportBackpacks
        {
        };
        class TransportItems
        {
            item_xx(FirstAidKit,2);
        };
    };

    // M-900
    class I_G_CA2035_Heli_Light_01_F;
    class I_CA2035PMC_Heli_Light_01_F : I_G_CA2035_Heli_Light_01_F {
        author = "kenoxite";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Heli_Light_01_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035PMC";
        side = 2;
        crew = "I_CA2035PMC_HeliPilot_F";

        hiddenSelections[]=
        {
            "camo1",
            "aiming_dot"
        };
        hiddenSelectionsTextures[]=
        {
            "A3\Air_F\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
        };

        textureList[]=
        {
            "CA2035PMC",
            1
        };
        class TextureSources
        {
            class CA2035PMC
            {
                author="kenoxite";
                displayName="PMC (Central Africa)";
                factions[]=
                {
                    "IND_CA2035PMC",
                    "BLU_CA2035PMC",
                    "OPF_CA2035PMC"
                };
                textures[]=
                {
                    "A3\Air_F\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
                };
            };
        };
    };

    // Assault boat
    class I_Boat_Transport_01_F;
    class I_CA2035PMC_Boat_Transport_01_F : I_Boat_Transport_01_F {
        author = "kenoxite";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Boat_Transport_01_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035PMC";
        side = 2;
        crew = "I_CA2035PMC_Soldier_lite_F";
        
        typicalCargo[]=
        {
            "I_CA2035PMC_Soldier_lite_F"
        };

        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
        };

        textureList[]=
        {
            "CA2035PMC",
            1
        };
        class TextureSources
        {
            class CA2035PMC
            {
                author="kenoxite";
                displayName="PMC (Central Africa)";
                factions[]=
                {
                    "IND_CA2035PMC",
                    "BLU_CA2035PMC",
                    "OPF_CA2035PMC"
                };
                textures[]=
                {
                    "\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
                };
            };
        };
        
        class TransportItems
        {
            item_xx(FirstAidKit,1);
        };
    };

    // MK6 Mortar
    class I_Mortar_01_F;
    class I_CA2035PMC_Mortar_01_F : I_Mortar_01_F {
        author = "kenoxite";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Mortar_01_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035PMC";
        side = 2;
        crew = "I_CA2035PMC_Soldier_lite_F";
    };

    // HMG 50
    class I_HMG_02_F;
    class I_CA2035PMC_HMG_02_F : I_HMG_02_F {
        author = "kenoxite";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_HMG_02_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035PMC";
        side = 2;
        crew = "I_CA2035PMC_Soldier_lite_F";
    };

    // HMG 50 Raised
    class I_HMG_02_high_F;
    class I_CA2035PMC_HMG_02_high_F : I_HMG_02_high_F {
        author = "kenoxite";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_HMG_02_high_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035PMC";
        side = 2;
        crew = "I_CA2035PMC_Soldier_lite_F";
    };

    // Static Titan Launcher (AT)
    class I_static_AT_F;
    class I_CA2035PMC_static_AT_F : I_static_AT_F {
        author = "kenoxite";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_static_AT_F.jpg";
        scope = 2;
        scopeCurator = 2;
        displayName = "Static Titan Launcher (AT) [PMC]";
        faction = "IND_CA2035PMC";
        side = 2;
        crew = "I_CA2035PMC_Soldier_lite_F";
    };

    // AR-2 Darter
    class I_UAV_01_F;
    class I_CA2035PMC_UAV_01_F : I_UAV_01_F {
        author = "kenoxite";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_UAV_01_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035PMC";
        side = 2;
        crew="I_UAV_AI";
        typicalCargo[]=
        {
            "I_UAV_AI"
        };
        class assembleInfo
        {
            primary=1;
            base="";
            assembleTo="";
            displayName="";
            dissasembleTo[]=
            {
                "I_CA2035PMC_UAV_01_backpack_F"
            };
        };

        hiddenSelections[]=
        {
            "Camo"
        };

        hiddenSelectionsTextures[] =
        {
            "\CA2035PMC\drones\air\uav_01\data\uav_01_black_co.paa"
        };

        textureList[]=
        {
            "CA2035PMC",
            1
        };
        class TextureSources
        {
            class CA2035PMC
            {
                author="kenoxite";
                displayName="PMC (Central Africa)";
                factions[]=
                {
                    "IND_CA2035PMC",
                    "BLU_CA2035PMC",
                    "OPF_CA2035PMC"
                };
                textures[]=
                {
                    "\CA2035PMC\drones\air\uav_01\data\uav_01_black_co.paa"
                };
            };
        };
    };

    // UGV Stomper RCWS
    class I_UGV_01_rcws_F;
    class I_CA2035PMC_UGV_01_rcws_F : I_UGV_01_rcws_F {
        author = "kenoxite";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_UGV_01_rcws_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035PMC";
        side = 2;
        crew="I_UAV_AI";
        typicalCargo[]=
        {
            "I_CA2035PMC_Soldier_lite_F"
        };

        hiddenSelectionsTextures[] =
        {
            "\CA2035PMC\drones\soft\ugv_01\data\ugv_01_ext_black_co.paa",
            "\CA2035PMC\drones\soft\ugv_01\data\ugv_01_int_black_co.paa",
            "\CA2035PMC\data\vehicles\turret_black_co.paa"
        };

        textureList[]=
        {
            "CA2035PMC",
            1
        };
        class TextureSources
        {
            class CA2035PMC
            {
                author="kenoxite";
                displayName="PMC (Central Africa)";
                factions[]=
                {
                    "IND_CA2035PMC",
                    "BLU_CA2035PMC",
                    "OPF_CA2035PMC"
                };
                textures[]=
                {
                    "\CA2035PMC\drones\soft\ugv_01\data\ugv_01_ext_black_co.paa",
                    "\CA2035PMC\drones\soft\ugv_01\data\ugv_01_int_black_co.paa",
                    "\CA2035PMC\data\vehicles\turret_black_co.paa"
                };
            };
        };
    };