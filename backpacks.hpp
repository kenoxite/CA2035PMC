// ************
// BACKPACKS
// ************
    class B_Kitbag_sgg;
    class B_Kitbag_rgr;
    class B_AssaultPack_khk;
    class B_AssaultPack_sgg;

    class B_AssaultPack_khk_AR_Zafir: B_AssaultPack_khk
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(150Rnd_762x54_Box_Tracer,2);
        };
        class TransportItems
        {
        };
    };

    class B_AssaultPack_khk_AR_RPK12: B_AssaultPack_khk
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(75rnd_762x39_AK12_Lush_Mag_F,3);
            mag_xx(75rnd_762x39_AK12_Lush_Mag_Tracer_F,1);
        };
        class TransportItems
        {
        };
    };

    class B_AssaultPack_sgg_Medic: B_AssaultPack_sgg
    {
        scope = 1;
        class TransportMagazines
        {
        };
        class TransportItems
        {
            item_xx(Medikit,1);
            item_xx(FirstAidKit,10);
        };
    };

    class B_AssaultPack_khk_GL: B_AssaultPack_khk
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(1Rnd_HE_Grenade_shell,15);
            mag_xx(30Rnd_556x45_Stanag_Sand,2);
        };
        class TransportItems
        {
        };
    };

    class B_AssaultPack_khk_LAT: B_AssaultPack_khk
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(NLAW_F,2);
        };
        class TransportItems
        {
        };
    };

    class B_AssaultPack_khk_LAT_MAAWS: B_AssaultPack_khk
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(MRAWS_HEAT55_F,2);
        };
        class TransportItems
        {
        };
    };
    
    class B_Kitbag_sgg_Engineer: B_Kitbag_sgg
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(SatchelCharge_Remote_Mag,1);
            mag_xx(DemoCharge_Remote_Mag,2);
        };
        class TransportItems
        {
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
        };
    };
    
    class B_Kitbag_rgr_Exp: B_Kitbag_rgr
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(APERSBoundingMine_Range_Mag,3);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
            mag_xx(SLAMDirectionalMine_Wire_Mag,2);
            mag_xx(DemoCharge_Remote_Mag,1);
        };
        class TransportItems
        {
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
        };
    };
    
    class B_AssaultPack_khk_Repair: B_AssaultPack_khk
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(SmokeShell,4);
        };
        class TransportItems
        {
            item_xx(ToolKit,1);
        };
    };
    
    class B_AssaultPack_khk_sniper_GM6: B_AssaultPack_khk
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(5Rnd_127x108_Mag,4);
            mag_xx(5Rnd_127x108_APDS_Mag,2);
        };
    };




    class I_UAV_01_backpack_F;

    // UAV Bag (AR-2) [PMC Indep]
    class I_CA2035PMC_UAV_01_backpack_F : I_UAV_01_backpack_F 
    {
        author="kenoxite";
        scope=2;
        displayName="UAV Bag (AR-2) [PMC Indep]";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\drones\air\uav_01\data\uav_backpack_black_co.paa"
        };

        class assembleInfo
        {
            primary = 1;
            base = "";
            displayName="$STR_A3_CfgVehicles_UAV_01_base0";
            assembleTo = "I_CA2035PMC_UAV_01_F";
            dissasembleTo[] = {};
        };
    };
    
    // UAV Bag (AR-2) [PMC OFPOR]
    class O_CA2035PMC_UAV_01_backpack_F : I_CA2035PMC_UAV_01_backpack_F 
    {
        author="kenoxite";
        scope=2;
        displayName="UAV Bag (AR-2) [PMC OFPOR]";
        class assembleInfo
        {
            primary = 1;
            base = "";
            displayName="$STR_A3_CfgVehicles_UAV_01_base0";
            assembleTo = "O_CA2035PMC_UAV_01_F";
            dissasembleTo[] = {};
        };
    };
    
    // UAV Bag (AR-2) [PMC BLUFOR]
    class B_CA2035PMC_UAV_01_backpack_F : I_CA2035PMC_UAV_01_backpack_F 
    {
        author="kenoxite";
        scope=2;
        displayName="UAV Bag (AR-2) [PMC BLUFOR]";
        class assembleInfo
        {
            primary = 1;
            base = "";
            displayName="$STR_A3_CfgVehicles_UAV_01_base0";
            assembleTo = "B_CA2035PMC_UAV_01_F";
            dissasembleTo[] = {};
        };
    };