// PMC - Independent

    class I_CA2035PMC_Soldier_F : CA2035PMC_Rifleman_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_A3_CfgVehicles_B_Soldier_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Soldier_F.jpg";
        
        IDENTITY_RU();
        
        faction = "IND_CA2035PMC";
        side = 2;

        role = "Rifleman";

        uniformClass = "U_I_CA2035PMC_CombatUniform_CADPATard_rolled";

        Items[]=
        {
            "FirstAidKit"
        };
        RespawnItems[]=
        {
            "FirstAidKit"
        };

        linkedItems[] = {
            "V_CarrierRigKBT_01_CA2035PMC_CADPATard",
            "H_HelmetHBK_headset_CA2035PMC_green",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = {
            "V_CarrierRigKBT_01_CA2035PMC_CADPATard",
            "H_HelmetHBK_headset_CA2035PMC_green",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        weapons[] = {
            "arifle_AK12U_trp_arco_pointer_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "arifle_AK12U_trp_arco_pointer_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };

        magazines[] = {
            mag_8(30Rnd_762x39_AK12_Mag_F),
            mag_3(16Rnd_9x21_Mag),
            mag_2(HandGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellRed),
            mag_1(Chemlight_red)
            };
        respawnMagazines[] = {
            mag_8(30Rnd_762x39_AK12_Mag_F),
            mag_3(16Rnd_9x21_Mag),
            mag_2(HandGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellRed),
            mag_1(Chemlight_red)
            };

        RANDOM_HEADGEAR();
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'rolled', 'full'] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };

    class I_CA2035PMC_Soldier_lite_F : I_CA2035PMC_Soldier_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_B_Soldier_lite_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Soldier_lite_F.jpg";
        
        IDENTITY_US();

        uniformClass = "U_I_CA2035PMC_CombatUniform_CADPATard_tshirt";

        linkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_green",
            "H_Cap_CA2035PMC_CADPATard",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_green",
            "H_Cap_CA2035PMC_CADPATard",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        weapons[] = {
            "arifle_SPAR_01_trp_holo_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "arifle_SPAR_01_trp_holo_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };

        magazines[] = {
            mag_5(30Rnd_556x45_Stanag_green),
            mag_3(16Rnd_9x21_Mag),
            mag_1(HandGrenade),
            mag_1(Chemlight_red),
            mag_1(HandGrenade),
            mag_1(SmokeShell)
            };
        respawnMagazines[] = {
            mag_5(30Rnd_556x45_Stanag_green),
            mag_3(16Rnd_9x21_Mag),
            mag_1(HandGrenade),
            mag_1(Chemlight_red),
            mag_1(HandGrenade),
            mag_1(SmokeShell)
            };

        RANDOM_HEADGEAR();
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'tshirt', 'vest'] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };

    class I_CA2035PMC_Soldier_AR_F : I_CA2035PMC_Soldier_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_B_Soldier_AR_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Soldier_AR_F.jpg";
        
        IDENTITY_UK();

        RIFLEMAN_LMG();

        backpack="B_AssaultPack_khk_AR_Zafir";

        linkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_green",
            "H_HelmetHBK_headset_CA2035PMC_digiarid",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_green",
            "H_HelmetHBK_headset_CA2035PMC_digiarid",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        uniformClass = "U_I_CA2035PMC_CombatUniform_digiarid_tshirt";

        weapons[] = {
            "LMG_Zafir_trp_arco_pointer_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "LMG_Zafir_trp_arco_pointer_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };

        magazines[] = {
            mag_1(150Rnd_762x54_Box_Tracer),
            mag_3(16Rnd_9x21_Mag),
            mag_1(HandGrenade),
            mag_1(SmokeShell),
            mag_1(Chemlight_red)
            };
        respawnMagazines[] = {
            mag_1(150Rnd_762x54_Box_Tracer),
            mag_3(16Rnd_9x21_Mag),
            mag_1(HandGrenade),
            mag_1(SmokeShell),
            mag_1(Chemlight_red)
            };

        RANDOM_HEADGEAR();
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'tshirt', 'vest'] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };

    class I_CA2035PMC_Soldier_M_F : I_CA2035PMC_Soldier_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_B_Soldier_M_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Soldier_M_F.jpg";
        
        IDENTITY_RU();
        
        RIFLEMAN_MARKSMAN();

        uniformClass = "U_I_CA2035PMC_CombatUniform_CADPATtrop_rolled";

        linkedItems[] = {
            "V_CarrierRigKBT_01_CA2035PMC_CADPATard",
            "H_Booniehat_CA2035PMC_digiarid",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = {
            "V_CarrierRigKBT_01_CA2035PMC_CADPATard",
            "H_Booniehat_CA2035PMC_digiarid",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        weapons[] = {
            "srifle_DMR_03_tropic_tws_pointer_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "srifle_DMR_03_tropic_tws_pointer_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };

        magazines[] = {
            mag_8(20Rnd_762x51_Mag),
            mag_3(16Rnd_9x21_Mag),
            mag_1(HandGrenade),
            mag_1(SmokeShell),
            mag_1(Chemlight_red)
            };
        respawnMagazines[] = {
            mag_8(20Rnd_762x51_Mag),
            mag_3(16Rnd_9x21_Mag),
            mag_1(HandGrenade),
            mag_1(SmokeShell),
            mag_1(Chemlight_red)
            };

        RANDOM_HEADGEAR();
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'rolled', 'full'] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };

    class I_CA2035PMC_Medic_F : I_CA2035PMC_Soldier_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_B_medic_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Medic_F.jpg";
        
        IDENTITY_CH();

        RIFLEMAN_MEDIC();

        backpack="B_AssaultPack_sgg_Medic";

        uniformClass = "U_I_CA2035PMC_CombatUniform_wdl_tshirt";

        linkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATtrp",
            "H_Cap_CA2035PMC_CADPATtrop",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATtrp",
            "H_Cap_CA2035PMC_CADPATtrop",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        weapons[] = {
            "SMG_02_holo_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "SMG_02_holo_F",
            "Throw",
            "Put"
            };

        magazines[] = {
            mag_6(30Rnd_9x21_Mag_SMG_02),
            mag_2(SmokeShell),
            mag_1(SmokeShellRed),
            mag_1(SmokeShellGreen),
            mag_1(Chemlight_red)
            };
        respawnMagazines[] = {
            mag_6(30Rnd_9x21_Mag_SMG_02),
            mag_2(SmokeShell),
            mag_1(SmokeShellRed),
            mag_1(SmokeShellGreen),
            mag_1(Chemlight_red)
            };

        RANDOM_HEADGEAR();
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'tshirt', 'vest'] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };

    class I_CA2035PMC_Soldier_UAV_F : I_CA2035PMC_Soldier_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_A3_B_SOLDIER_UAV_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Soldier_UAV_F.jpg";
        
        IDENTITY_EU();
        
        RIFLEMAN_UAV();

        uniformClass = "U_I_CA2035PMC_CombatUniform_CADPATaltis_rolled";  

        linkedItems[] = 
        {
            "V_CarrierRigKBT_01_CA2035PMC_CADPATard",
            "H_HelmetHBK_headset_CA2035PMC_CAPATard",
            "ItemMap",
            "I_CA2035PMC_UavTerminal",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = 
        {
            "V_CarrierRigKBT_01_CA2035PMC_CADPATard",
            "H_HelmetHBK_headset_CA2035PMC_CAPATard",
            "ItemMap",
            "I_CA2035PMC_UavTerminal",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        backpack = "I_CA2035PMC_UAV_01_backpack_F";

        weapons[] = {
            "arifle_SPAR_01_trp_aco_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "arifle_SPAR_01_trp_aco_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };

        magazines[] = {
            mag_5(30Rnd_556x45_Stanag_green),
            mag_3(16Rnd_9x21_Mag),
            mag_1(SmokeShell),
            mag_1(HandGrenade),
            mag_1(Chemlight_red)
            };
        respawnMagazines[] = {
            mag_5(30Rnd_556x45_Stanag_green),
            mag_3(16Rnd_9x21_Mag),
            mag_1(SmokeShell),
            mag_1(HandGrenade),
            mag_1(Chemlight_red)
            };

        RANDOM_HEADGEAR();
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'rolled', 'full'] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };

    class I_CA2035PMC_Soldier_TL_F : I_CA2035PMC_Soldier_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_B_Soldier_TL_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Soldier_TL_F.jpg";
        
        IDENTITY_CA();

        RIFLEMAN_LEADER();

        backpack = "B_AssaultPack_khk_GL";

        uniformClass = "U_I_CA2035PMC_CombatUniform_CADPATard_rolled";

        linkedItems[] = 
        {
            "V_CarrierRigKBT_01_CA2035PMC_CADPATaltis",
            "H_Booniehat_CA2035PMC_CADPATtrop",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = 
        {
            "V_CarrierRigKBT_01_CA2035PMC_CADPATaltis",
            "H_Booniehat_CA2035PMC_CADPATtrop",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        weapons[] = {
            "arifle_SPAR_01_GL_digiarid_arco_pointer_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put",
            "Laserdesignator_03"
            };
        respawnWeapons[] = {
            "arifle_SPAR_01_GL_digiarid_arco_pointer_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put",
            "Laserdesignator_03"
            };

        magazines[] = {
            mag_5(30Rnd_556x45_Stanag_green),
            mag_3(16Rnd_9x21_Mag),
            mag_4(1Rnd_HE_Grenade_shell),
            mag_1(SmokeShell),
            mag_1(SmokeShellRed),
            mag_1(SmokeShellGreen),
            mag_1(Chemlight_red)
            };
        respawnMagazines[] = {
            mag_5(30Rnd_556x45_Stanag_green),
            mag_3(16Rnd_9x21_Mag),
            mag_4(1Rnd_HE_Grenade_shell),
            mag_1(SmokeShell),
            mag_1(SmokeShellRed),
            mag_1(SmokeShellGreen),
            mag_1(Chemlight_red)
            };

        RANDOM_HEADGEAR();
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'rolled', 'full'] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };

    class I_CA2035PMC_Soldier_LAT_F : I_CA2035PMC_Soldier_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        // displayName="$STR_B_Soldier_LAT_F0";
        displayName="$STR_A3_CfgVehicles_B_soldier_LAT2_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Soldier_LAT_F.jpg";
        
        IDENTITY_PE();

        RIFLEMAN_AT();

        uniformClass = "U_I_CA2035PMC_CombatUniform_digiarid_tshirt";

        backpack = "B_AssaultPack_khk_LAT_MAAWS";

        linkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard",
            "H_HelmetHBK_headset_CA2035PMC_CAPATard",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard",
            "H_HelmetHBK_headset_CA2035PMC_CAPATard",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        weapons[] = {
            "arifle_SPAR_01_khk_arco_F",
            "launch_MRAWS_green_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "arifle_SPAR_01_khk_arco_F",
            "launch_MRAWS_green_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };

        magazines[] = {
            mag_5(30Rnd_556x45_Stanag_green),
            mag_3(16Rnd_9x21_Mag),
            mag_1(MRAWS_HEAT55_F),
            mag_1(SmokeShell),
            mag_1(HandGrenade),
            mag_1(Chemlight_red)
            };
        respawnMagazines[] = {
            mag_5(30Rnd_556x45_Stanag_green),
            mag_3(16Rnd_9x21_Mag),
            mag_1(MRAWS_HEAT55_F),
            mag_1(SmokeShell),
            mag_1(HandGrenade),
            mag_1(Chemlight_red)
            };

        RANDOM_HEADGEAR();
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'tshirt', 'vest'] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };

    class I_CA2035PMC_Engineer_F : I_CA2035PMC_Soldier_F {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        displayName="$STR_B_engineer_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Engineer_F.jpg";
        
        IDENTITY_US();
        
        RIFLEMAN_ENGI();

        backpack = "B_Kitbag_sgg_Engineer";

        uniformClass = "U_I_CA2035PMC_CombatUniform_CADPATtrop_tshirt";

        linkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard",
            "H_HelmetHBK_headset_CA2035PMC_CAPATard",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard",
            "H_HelmetHBK_headset_CA2035PMC_CAPATard",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        weapons[] = {
            "arifle_SPAR_01_trp_aco_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "arifle_SPAR_01_trp_aco_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };

        magazines[] = {
            mag_5(30Rnd_556x45_Stanag_green),
            mag_3(16Rnd_9x21_Mag),
            mag_1(SmokeShell),
            mag_1(HandGrenade),
            mag_1(Chemlight_red)
            };
        respawnMagazines[] = {
            mag_5(30Rnd_556x45_Stanag_green),
            mag_3(16Rnd_9x21_Mag),
            mag_1(SmokeShell),
            mag_1(HandGrenade),
            mag_1(Chemlight_red)
            };

        RANDOM_HEADGEAR();
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'tshirt', 'vest'] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };

    class I_CA2035PMC_Soldier_Exp_F : I_CA2035PMC_Engineer_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_B_Soldier_exp_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Soldier_Exp_F.jpg";
        
        IDENTITY_SA();
        
        RIFLEMAN_DEMO();
        
        backpack = "B_Kitbag_rgr_Exp";

        uniformClass = "U_I_CA2035PMC_CombatUniform_digiarid_rolled";

        linkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard",
            "H_Booniehat_CA2035PMC_CADPATwddard",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard",
            "H_Booniehat_CA2035PMC_CADPATard",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        weapons[] = {
            "arifle_SPAR_01_trp_holo_pointer_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "arifle_SPAR_01_trp_holo_pointer_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };

        RANDOM_HEADGEAR();
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'rolled', 'vest'] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };

    class I_CA2035PMC_Soldier_Repair_F : I_CA2035PMC_Engineer_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_B_Soldier_repair_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Soldier_Repair_F.jpg";
        
        IDENTITY_US();
        
        RIFLEMAN_REPAIR();

        backpack = "B_AssaultPack_khk_Repair";

        uniformClass = "U_I_CA2035PMC_CombatUniform_digiarid_tshirt";

        linkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATaltis",
            "H_Cap_CA2035PMC_digiarid",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATaltis",
            "H_Cap_CA2035PMC_digiarid",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        weapons[] = {
            "arifle_SPAR_01_digiarid_aco_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "arifle_SPAR_01_digiarid_aco_F",
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };
    };

    class I_CA2035PMC_HeliPilot_F : I_CA2035PMC_Soldier_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_B_helipilot_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_HeliPilot_F.jpg";
        
        IDENTITY_RU();

        PILOT();
        
        uniformClass = "U_I_CA2035PMC_HeliPilotCoveralls";

        linkedItems[] = {
            // "H_PilotHelmetHeli_I_E",
            "H_Cap_headphones_CA2035PMC",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = {
            // "H_PilotHelmetHeli_I_E",
            "H_Cap_headphones_CA2035PMC",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        weapons[] = {
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "hgun_P07_blk_F",
            "Throw",
            "Put"
            };

        magazines[] = {
            mag_2(16Rnd_9x21_Mag),
            mag_1(Chemlight_red)
            };
        respawnMagazines[] = {
            mag_2(16Rnd_9x21_Mag),
            mag_1(Chemlight_red)
            };

        // class EventHandlers: EventHandlers {init = "";};

        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), nil, []] call BIS_fnc_unitHeadgear; };";
        };
    };

    class I_CA2035PMC_Sniper_F : I_CA2035PMC_Sniper_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_B_sniper_F0";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Sniper_F.jpg";
        
        IDENTITY_EU();

        uniformClass = "U_I_CA2035PMC_CombatUniform_CADPATaltis_rolled";

        backpack = "B_AssaultPack_khk_sniper_GM6";

        linkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATtrp",
            "H_Booniehat_CA2035PMC_CADPATard",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = {
            "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATtrp",
            "H_Booniehat_CA2035PMC_CADPATardsd",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        
        weapons[] = {
            "srifle_GM6_digiarid_LRPS_tna_F",
            "hgun_P07_blk_F",
            "Rangefinder",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "srifle_GM6_digiarid_LRPS_tna_F",
            "hgun_P07_blk_F",
            "Rangefinder",
            "Throw",
            "Put"
            };

        magazines[] = {
            mag_3(5Rnd_127x108_Mag),
            mag_3(16Rnd_9x21_Mag),
            mag_1(SmokeShell),
            mag_1(SmokeShell),
            mag_1(SmokeShellRed),
            mag_1(SmokeShellGreen),
            mag_1(HandGrenade),
            mag_1(Chemlight_red)
            };
        respawnMagazines[] = {
            mag_3(5Rnd_127x108_Mag),
            mag_3(16Rnd_9x21_Mag),
            mag_1(SmokeShell),
            mag_1(SmokeShell),
            mag_1(SmokeShellRed),
            mag_1(SmokeShellGreen),
            mag_1(HandGrenade),
            mag_1(Chemlight_red)
            };

        RANDOM_HEADGEAR();
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'rolled', 'vest'] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };

    class I_CA2035PMC_Leader_F : I_CA2035PMC_Soldier_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="Boss";
        editorPreview = "\CA2035PMC\indep\previews\I_CA2035PMC_Leader_F.jpg";
        
        IDENTITY_EU();

        RIFLEMAN_OFFICER();

        backpack = "";

        uniformClass = "U_I_CA2035PMC_CombatUniform_CADPATtrop_tshirt";

        linkedItems[] = 
        {
            "V_CarrierRigKBT_01_CA2035PMC_black",
            "H_HeadSet_black_F",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };
        respawnlinkedItems[] = 
        {
            "V_CarrierRigKBT_01_CA2035PMC_black",
            "H_HeadSet_black_F",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "X_CA2035PMC_NVGoggles_Hidden"
        };

        weapons[] = {
            "arifle_Mk20_Black_tws_pointer_F",
            "hgun_Pistol_heavy_01_green_F",
            "Throw",
            "Put",
            "Laserdesignator_03"
            };
        respawnWeapons[] = {
            "arifle_Mk20_Black_tws_pointer_F",
            "hgun_Pistol_heavy_01_green_F",
            "Throw",
            "Put",
            "Laserdesignator_03"
            };

        magazines[] = {            
            mag_4(30Rnd_556x45_Stanag_Tracer_Green),
            mag_4(30Rnd_556x45_Stanag_Green),
            mag_3(11Rnd_45ACP_Mag),
            mag_1(HandGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellRed),
            mag_1(SmokeShellGreen),
            mag_1(Chemlight_red)
            };
        respawnMagazines[] = { 
            mag_4(30Rnd_556x45_Stanag_Tracer_Green),
            mag_4(30Rnd_556x45_Stanag_Green),
            mag_3(11Rnd_45ACP_Mag),
            mag_1(HandGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellRed),
            mag_1(SmokeShellGreen),
            mag_1(Chemlight_red)
            };

        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then { [(_this select 0), 'tshirt', ''] call CA2035PMC_fnc_randomUniformTexture; };";
        };
    };