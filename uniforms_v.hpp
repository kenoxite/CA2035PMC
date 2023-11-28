// PMC
    class CA2035PMC_Rifleman_Base_F: I_Soldier_base_F
    {
        author="kenoxite";
        scope=0;
        accuracy=3.9000001;
        camouflage=1.2;
        cost=50000;
        minFireTime=9;
        picture="";
        // editorPreview = "\CA2035PMC\indep\previews\t\I_CA2035PMC_Soldier_F.jpg";
        editorSubcategory="EdSubcat_Personnel";
        portrait="";
        side=2;
        faction="IND_CA2035PMC";
        icon="iconMan";
        Items[]=
        {
            "FirstAidKit"
        };
        linkedItems[]=
        {
            "V_CarrierRigKBT_01_light_Olive_F",
            "H_HelmetHBK_headset_F",
            "ItemMap",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch"
        };
        RespawnItems[]=
        {
            "FirstAidKit"
        };
        respawnLinkedItems[]=
        {
            "V_CarrierRigKBT_01_light_Olive_F",
            "H_HelmetHBK_headset_F",
            "ItemMap",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch"
        };
        
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";

        modelSides[]={3,2,1,0};
        nakedUniform="U_BasicBody";
        uniformClass="U_B_CombatUniform_mcam_vest";

        vehicleClass="Men";
        Weapons[]=
        {
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "Throw",
            "Put"
        };
        class EventHandlers
        {
        };
    };

    // CADPAT ARID
    class I_CA2035PMC_Rifleman_CADPATard_UnifBase : CA2035PMC_Rifleman_Base_F {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";

        armor=2;
        armorStructural=4;
        explosionShielding=0.40000001;
        camouflage=1.4;

        uniformClass = "U_I_CA2035PMC_CombatUniform_CADPATard_rolled";
        hiddenSelections[]=
        {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[]=
        {
            UNIFORM_CADPAT_ARD();
        };
    };

    class I_CA2035PMC_Rifleman_CADPATard_tshirt_UnifBase : CA2035PMC_Rifleman_Base_F {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";

        armor=2;
        armorStructural=4;
        explosionShielding=0.40000001;

        uniformClass = "U_I_CA2035PMC_CombatUniform_CADPATard_tshirt";
        hiddenSelections[]=
        {
            "Camo",
            "Camo2",
            "insignia"
        };
        hiddenSelectionsTextures[]=
        {
            UNIFORM_TSHIRT_CADPAT_ARD();
        };
    };

    // CADPAT TROPIC
    class I_CA2035PMC_Rifleman_CADPATtrop_UnifBase : I_CA2035PMC_Rifleman_CADPATard_UnifBase {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            UNIFORM_CADPAT_TROPIC();
        };
    };

    class I_CA2035PMC_Rifleman_CADPATtrop_tshirt_UnifBase : I_CA2035PMC_Rifleman_CADPATard_tshirt_UnifBase {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            UNIFORM_TSHIRT_CADPAT_TROPIC();
        };
    };

    // CADPAT ALTIS
    class I_CA2035PMC_Rifleman_CADPATaltis_UnifBase : I_CA2035PMC_Rifleman_CADPATard_UnifBase {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            UNIFORM_CADPAT_ALTIS();
        };
    };

    class I_CA2035PMC_Rifleman_CADPATaltis_tshirt_UnifBase : I_CA2035PMC_Rifleman_CADPATard_tshirt_UnifBase {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            UNIFORM_TSHIRT_CADPAT_ALTIS();
        };
    };

    // DIGI ARID
    class I_CA2035PMC_Rifleman_digiarid_UnifBase : I_CA2035PMC_Rifleman_CADPATard_UnifBase {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            UNIFORM_DIGIARID();
        };
    };

    class I_CA2035PMC_Rifleman_digiarid_tshirt_UnifBase : I_CA2035PMC_Rifleman_CADPATard_tshirt_UnifBase {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            UNIFORM_TSHIRT_DIGIARID();
        };
    };

    // WOODLAND
    class I_CA2035PMC_Rifleman_wdl_UnifBase : I_CA2035PMC_Rifleman_CADPATard_UnifBase {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            UNIFORM_WDL();
        };
    };

    class I_CA2035PMC_Rifleman_wdl_tshirt_UnifBase : I_CA2035PMC_Rifleman_CADPATard_tshirt_UnifBase {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            UNIFORM_TSHIRT_WDL();
        };
    };

    // HELICOPTER PILOT COVERALLS
    class I_CA2035PMC_Rifleman_HeliPilotCoveralls_UnifBase : CA2035PMC_Rifleman_Base_F {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        model="\A3\Characters_F\Common\coveralls.p3d";

        armor=2;
        armorStructural=2;
        explosionShielding=0.2;
        camouflage=1.4;
        
        uniformClass = "U_I_CA2035PMC_HeliPilotCoveralls";
        hiddenSelections[]=
        {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[]=
        {
            "\CA2035\indep\data\coveralls_CA2035_green_co.paa"
        };
    };


    
// SNIPERS

    class I_CA2035PMC_Sniper_Base_F : CA2035PMC_Rifleman_Base_F {
        author = "kenoxite";
        scope = 0;
        accuracy=3.9000001;
        displayName = "Sniper";

        minFireTime=9;
        detectSkill=18;

        vehicleClass="MenSniper";
        role="Marksman";
        primaryAmmoCoef=0.2;
        secondaryAmmoCoef=0.050000001;
        handgunAmmoCoef=0.1;
        
        class SpeechVariants
        {
            class Default
            {
                speechSingular[]=
                {
                    "veh_infantry_SF_s"
                };
                speechPlural[]=
                {
                    "veh_infantry_SF_p"
                };
            };
        };
        textSingular="$STR_A3_nameSound_veh_infantry_SF_s";
        textPlural="$STR_A3_nameSound_veh_infantry_SF_p";
        nameSound="veh_infantry_SF_s";

        uniformClass = "U_I_CA2035_GhillieSuit_wdl";

        threat[]={0.80000001,0.30000001,0.30000001};
        camouflage=0.60000002;
        cost=250000;
    };
