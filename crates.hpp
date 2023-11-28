    class Box_East_Ammo_F; // CUP_RUBasicAmmunitionBox
    class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
    class Box_East_Wps_F; // CUP_RUBasicWeaponsBox
    class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
    class Box_East_Support_F; // CUP_RUSpecialWeaponsBox
    class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
    class Box_East_WpsLaunch_F; // CUP_RULaunchersBox
    class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
    //class Box_East_Uniforms_F; // CUP_RUBasicWeaponsBox
    class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
    class O_SupplyCrate_F; // CUP_RUVehicleBox
    class B_SupplyCrate_F; // CUP_USVehicleBox

    class IND_CA2035PMC_AmmoBox : Box_NATO_Ammo_F {
        author = ALiVE ORBAT CREATOR;
        displayName = PMC (Central Africa) Ammo Box;
        class TransportMagazines {
            mag_xx(30Rnd_762x39_AK12_Mag_F,50);
            mag_xx(Chemlight_red,50);
            mag_xx(16Rnd_9x21_Mag,50);
            mag_xx(HandGrenade,50);
            mag_xx(SmokeShell,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(30Rnd_556x45_Stanag_green,50);
            mag_xx(150Rnd_762x54_Box_Tracer,50);
            mag_xx(20Rnd_762x51_Mag,50);
            mag_xx(30Rnd_9x21_Mag_SMG_02,50);
            mag_xx(SmokeShellGreen,50);
            mag_xx(1Rnd_HE_Grenade_shell,50);
            mag_xx(30Rnd_556x45_Stanag_Tracer_Green,50);
            mag_xx(MRAWS_HE_F,50);
            mag_xx(MRAWS_HEAT55_F,50);
            mag_xx(APERSBoundingMine_Range_Mag,50);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
            mag_xx(SLAMDirectionalMine_Wire_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(5Rnd_127x108_Mag,50);
            mag_xx(5Rnd_127x108_APDS_Mag,50);
            mag_xx(11Rnd_45ACP_Mag,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class IND_CA2035PMC_WeaponsBox : Box_NATO_Wps_F {
        author = ALiVE ORBAT CREATOR;
        displayName = PMC (Central Africa) Weapons Box;
        class TransportMagazines {
            mag_xx(30Rnd_762x39_AK12_Mag_F,50);
            mag_xx(16Rnd_9x21_Mag,50);
            mag_xx(30Rnd_556x45_Stanag_green,50);
            mag_xx(150Rnd_762x54_Box_Tracer,50);
            mag_xx(20Rnd_762x51_Mag,50);
            mag_xx(30Rnd_9x21_Mag_SMG_02,50);
            mag_xx(1Rnd_HE_Grenade_shell,50);
            mag_xx(5Rnd_127x108_Mag,50);
            mag_xx(11Rnd_45ACP_Mag,50);
        };
        class TransportWeapons {
            weap_xx(arifle_AK12U_trp_arco_pointer_F,10);
            weap_xx(hgun_P07_blk_F,10);
            weap_xx(arifle_SPAR_01_trp_holo_F,10);
            weap_xx(LMG_Zafir_trp_arco_pointer_F,10);
            weap_xx(srifle_DMR_03_tropic_sos_pointer_F,10);
            weap_xx(SMG_02_holo_F,10);
            weap_xx(arifle_SPAR_01_trp_aco_F,10);
            weap_xx(arifle_SPAR_01_GL_digiarid_arco_pointer_F,10);
            weap_xx(arifle_SPAR_01_khk_arco_F,10);
            weap_xx(arifle_SPAR_01_trp_holo_pointer_F,10);
            weap_xx(arifle_SPAR_01_digiarid_aco_F,10);
            weap_xx(srifle_GM6_digiarid_LRPS_tna_F,10);
            weap_xx(arifle_Mk20_Black_tws_pointer_F,10);
            weap_xx(hgun_Pistol_heavy_01_green_F,10);
        };
        class TransportItems {
            item_xx(acc_pointer_IR,10);
            item_xx(optic_Arco_AK_lush_F,10);
            item_xx(optic_Holosight_lush_F,10);
            item_xx(optic_Arco_blk_F,10);
            item_xx(optic_SOS_khk_F,10);
            item_xx(optic_Holosight_smg_blk_F,10);
            item_xx(optic_Aco,10);
            item_xx(optic_tws,10);
            item_xx(optic_Arco_lush_F,10);
            item_xx(optic_LRPS_tna_F,10);
        };
    };
    class IND_CA2035PMC_LaunchersBox : Box_NATO_WpsLaunch_F {
        author = ALiVE ORBAT CREATOR;
        displayName = PMC (Central Africa) Launchers Box;
        class TransportMagazines {
            mag_xx(MRAWS_HEAT55_F,5);
        };
        class TransportWeapons {
            weap_xx(launch_MRAWS_green_F,5);
        };
        class TransportItems {
        };
    };
    class IND_CA2035PMC_UniformBox : Box_NATO_Uniforms_F {
        author = ALiVE ORBAT CREATOR;
        displayName = PMC (Central Africa) Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(U_I_CA2035PMC_CombatUniform_CADPATard_rolled,15);
            item_xx(U_I_CA2035PMC_CombatUniform_CADPATard_tshirt,15);
            item_xx(U_I_CA2035PMC_CombatUniform_digiarid_tshirt,15);
            item_xx(U_I_CA2035PMC_CombatUniform_CADPATtrop_rolled,15);
            item_xx(U_I_CA2035PMC_CombatUniform_wdl_tshirt,15);
            item_xx(U_I_CA2035PMC_CombatUniform_CADPATaltis_rolled,15);
            item_xx(U_I_CA2035PMC_CombatUniform_digiarid_rolled,15);
            item_xx(U_I_CA2035PMC_HeliPilotCoveralls,15);
            item_xx(U_I_CA2035PMC_CombatUniform_CADPATtrop_tshirt,15);
        };
    };
    class IND_CA2035PMC_SupportBox : Box_NATO_Support_F {
        author = ALiVE ORBAT CREATOR;
        displayName = PMC (Central Africa) Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(V_CarrierRigKBT_01_CA2035PMC_green,10);
            item_xx(H_HelmetHBK_headset_CA2035PMC_CAPATard,10);
            item_xx(G_Tactical_Black_CA2035PMC,10);
            item_xx(NVGoggles_OPFOR,10);
            item_xx(X_CA2035PMC_NVGoggles_Hidden,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(ItemGPS,10);
            item_xx(V_CarrierRigKBT_01_vest_CA2035PMC_black,10);
            item_xx(G_Bandanna_khk_CA2035PMC,10);
            item_xx(H_HelmetHBK_headset_CA2035PMC_green,10);
            item_xx(G_Balaclava_blk_CA2035PMC,10);
            item_xx(B_AssaultPack_khk_AR_Zafir,10);
            item_xx(V_CarrierRigKBT_01_CA2035PMC_black,10);
            item_xx(V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard,10);
            item_xx(G_Balaclava_oli_CA2035PMC,10);
            item_xx(B_AssaultPack_sgg_Medic,10);
            item_xx(I_CA2035PMC_UAV_01_backpack_F,10);
            item_xx(I_CA2035PMC_UavTerminal,10);
            item_xx(O_CA2035PMC_UAV_01_backpack_F,10);
            item_xx(O_CA2035PMC_UavTerminal,10);
            item_xx(B_CA2035PMC_UAV_01_backpack_F,10);
            item_xx(B_CA2035PMC_UavTerminal,10);
            item_xx(Laserdesignator_03,10);
            item_xx(V_CarrierRigKBT_01_CA2035PMC_CADPATard,10);
            item_xx(H_Cap_CA2035PMC_digiarid,10);
            item_xx(B_AssaultPack_khk_GL,10);
            item_xx(V_CarrierRigKBT_01_vest_CA2035PMC_CADPATaltis,10);
            item_xx(H_Booniehat_CA2035PMC_CADPATard,10);
            item_xx(G_Sport_Red_CA2035PMC,10);
            item_xx(B_AssaultPack_khk_LAT_MAAWS,10);
            item_xx(V_PlateCarrierIA1_CA2035_green,10);
            item_xx(H_Booniehat_CA2035PMC_CADPATtrop,10);
            item_xx(B_Kitbag_rgr_Exp,10);
            item_xx(H_Booniehat_CA2035PMC_digiarid,10);
            item_xx(G_Combat_Goggles_tna_F_CA2035PMC,10);
            item_xx(B_AssaultPack_khk_Repair,10);
            item_xx(H_Cap_headphones_CA2035PMC,10);
            item_xx(Rangefinder,10);
            item_xx(V_CarrierRigKBT_01_vest_CA2035PMC_green,10);
            item_xx(H_Cap_CA2035PMC_CADPATard,10);
            item_xx(B_AssaultPack_khk_sniper_GM6,10);
            item_xx(H_HeadSet_black_F,10);
            item_xx(G_Tactical_Clear,10);
        };
    };
    class IND_CA2035PMC_SupplyBox : B_SupplyCrate_F {
        author = ALiVE ORBAT CREATOR;
        displayName = PMC (Central Africa) Supply Box;
        class TransportMagazines {
            mag_xx(30Rnd_762x39_AK12_Mag_F,50);
            mag_xx(Chemlight_red,50);
            mag_xx(16Rnd_9x21_Mag,50);
            mag_xx(HandGrenade,50);
            mag_xx(SmokeShell,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(30Rnd_556x45_Stanag_green,50);
            mag_xx(150Rnd_762x54_Box_Tracer,50);
            mag_xx(20Rnd_762x51_Mag,50);
            mag_xx(30Rnd_9x21_Mag_SMG_02,50);
            mag_xx(SmokeShellGreen,50);
            mag_xx(1Rnd_HE_Grenade_shell,50);
            mag_xx(30Rnd_556x45_Stanag_Tracer_Green,50);
            mag_xx(MRAWS_HE_F,50);
            mag_xx(MRAWS_HEAT55_F,50);
            mag_xx(APERSBoundingMine_Range_Mag,50);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
            mag_xx(SLAMDirectionalMine_Wire_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(5Rnd_127x108_Mag,50);
            mag_xx(5Rnd_127x108_APDS_Mag,50);
            mag_xx(11Rnd_45ACP_Mag,50);
        };
        class TransportWeapons {
            weap_xx(arifle_AK12U_trp_arco_pointer_F,10);
            weap_xx(hgun_P07_blk_F,10);
            weap_xx(arifle_SPAR_01_trp_holo_F,10);
            weap_xx(LMG_Zafir_trp_arco_pointer_F,10);
            weap_xx(srifle_DMR_03_tropic_sos_pointer_F,10);
            weap_xx(SMG_02_holo_F,10);
            weap_xx(arifle_SPAR_01_trp_aco_F,10);
            weap_xx(arifle_SPAR_01_GL_digiarid_arco_pointer_F,10);
            weap_xx(arifle_SPAR_01_khk_arco_F,10);
            weap_xx(arifle_SPAR_01_trp_holo_pointer_F,10);
            weap_xx(arifle_SPAR_01_digiarid_aco_F,10);
            weap_xx(srifle_GM6_digiarid_LRPS_tna_F,10);
            weap_xx(arifle_Mk20_Black_tws_pointer_F,10);
            weap_xx(hgun_Pistol_heavy_01_green_F,10);
            weap_xx(launch_MRAWS_green_F,10);
        };
        class TransportItems {
            item_xx(acc_pointer_IR,10);
            item_xx(optic_Arco_AK_lush_F,10);
            item_xx(optic_Holosight_lush_F,10);
            item_xx(optic_Arco_blk_F,10);
            item_xx(optic_SOS_khk_F,10);
            item_xx(optic_Holosight_smg_blk_F,10);
            item_xx(optic_Aco,10);
            item_xx(optic_Arco_lush_F,10);
            item_xx(optic_LRPS_tna_F,10);
            item_xx(optic_tws,10);
            item_xx(V_CarrierRigKBT_01_CA2035PMC_green,10);
            item_xx(H_HelmetHBK_headset_CA2035PMC_CAPATard,10);
            item_xx(G_Tactical_Black_CA2035PMC,10);
            item_xx(NVGoggles_OPFOR,10);
            item_xx(X_CA2035PMC_NVGoggles_Hidden,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(ItemGPS,10);
            item_xx(V_CarrierRigKBT_01_vest_CA2035PMC_black,10);
            item_xx(G_Bandanna_khk_CA2035PMC,10);
            item_xx(H_HelmetHBK_headset_CA2035PMC_green,10);
            item_xx(G_Balaclava_blk_CA2035PMC,10);
            item_xx(B_AssaultPack_khk_AR_Zafir,10);
            item_xx(V_CarrierRigKBT_01_CA2035PMC_black,10);
            item_xx(V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard,10);
            item_xx(G_Balaclava_oli_CA2035PMC,10);
            item_xx(B_AssaultPack_sgg_Medic,10);
            item_xx(I_CA2035PMC_UAV_01_backpack_F,10);
            item_xx(I_CA2035PMC_UavTerminal,10);
            item_xx(O_CA2035PMC_UAV_01_backpack_F,10);
            item_xx(O_CA2035PMC_UavTerminal,10);
            item_xx(B_CA2035PMC_UAV_01_backpack_F,10);
            item_xx(B_CA2035PMC_UavTerminal,10);
            item_xx(Laserdesignator_03,10);
            item_xx(V_CarrierRigKBT_01_CA2035PMC_CADPATard,10);
            item_xx(H_Cap_CA2035PMC_digiarid,10);
            item_xx(B_AssaultPack_khk_GL,10);
            item_xx(V_CarrierRigKBT_01_vest_CA2035PMC_CADPATaltis,10);
            item_xx(H_Booniehat_CA2035PMC_CADPATard,10);
            item_xx(G_Sport_Red_CA2035PMC,10);
            item_xx(B_AssaultPack_khk_LAT_MAAWS,10);
            item_xx(V_PlateCarrierIA1_CA2035_green,10);
            item_xx(H_Booniehat_CA2035PMC_CADPATtrop,10);
            item_xx(B_Kitbag_rgr_Exp,10);
            item_xx(H_Booniehat_CA2035PMC_digiarid,10);
            item_xx(G_Combat_Goggles_tna_F_CA2035PMC,10);
            item_xx(B_AssaultPack_khk_Repair,10);
            item_xx(H_Cap_headphones_CA2035PMC,10);
            item_xx(Rangefinder,10);
            item_xx(V_CarrierRigKBT_01_vest_CA2035PMC_green,10);
            item_xx(H_Cap_CA2035PMC_CADPATard,10);
            item_xx(B_AssaultPack_khk_sniper_GM6,10);
            item_xx(H_HeadSet_black_F,10);
            item_xx(G_Tactical_Clear,10);
            item_xx(U_I_CA2035PMC_CombatUniform_CADPATard_rolled,10);
            item_xx(U_I_CA2035PMC_CombatUniform_CADPATard_tshirt,10);
            item_xx(U_I_CA2035PMC_CombatUniform_digiarid_tshirt,10);
            item_xx(U_I_CA2035PMC_CombatUniform_CADPATtrop_rolled,10);
            item_xx(U_I_CA2035PMC_CombatUniform_wdl_tshirt,10);
            item_xx(U_I_CA2035PMC_CombatUniform_CADPATaltis_rolled,10);
            item_xx(U_I_CA2035PMC_CombatUniform_digiarid_rolled,10);
            item_xx(U_I_CA2035PMC_HeliPilotCoveralls,10);
            item_xx(U_I_CA2035PMC_CombatUniform_CADPATtrop_tshirt,10);
        };
    };