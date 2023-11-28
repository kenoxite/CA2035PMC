
// ************
// WEAPONS
// ************
    class srifle_DMR_03_F;  // MK-I EMR 7.62 mm (Black)
    class srifle_DMR_03_multicam_F;  // MK-I EMR 7.62 mm (Camo)
    class srifle_DMR_03_khaki_F;  // MK-I EMR 7.62 mm (Khaki)
    class srifle_DMR_03_tan_F;  // MK-I EMR 7.62 mm (Sand)
    class srifle_DMR_03_woodland_F;  // MK-I EMR 7.62 mm (Woodland)

    class arifle_SPAR_01_blk_F; // SPAR-16 5.56 mm (Black)
    class arifle_SPAR_01_khk_F; // SPAR-16 5.56 mm (Khaki)
    class arifle_SPAR_01_snd_F; // SPAR-16 5.56 mm (Sand)

    class arifle_SPAR_01_GL_blk_F; // SPAR-16 GL 5.56 mm (Black)
    class arifle_SPAR_01_GL_khk_F; // SPAR-16 GL 5.56 mm (Khaki)
    class arifle_SPAR_01_GL_snd_F; // SPAR-16 GL 5.56 mm (Sand)

    class arifle_SPAR_03_blk_F; // SPAR-16 7.62 mm (Black)
    class arifle_SPAR_03_khk_F; // SPAR-16 7.62 mm (Khaki)
    class arifle_SPAR_03_snd_F; // SPAR-16 7.62 mm (Sand)

    class arifle_AK12U_F; // AKU-12 7.62 mm (Black)
    class arifle_AK12U_lush_F; // AKU-12 7.62 mm (Lush)
    class arifle_AK12U_arid_F; // AKU-12 7.62 mm (Arid)

    class arifle_RPK12_F;   // RPK-12 7.62 mm (Black)
    class arifle_RPK12_lush_F;   // RPK-12 7.62 mm (Lush)
    class arifle_RPK12_arid_F;   // RPK-12 7.62 mm (Arid)

    class LMG_Zafir_F;   // Zafir 7.62 mm

    class SMG_02_F;   // Sting 9 mm

    class srifle_GM6_F;   // GM6 Lynx 12.7 mm (Black)

    class I_CA2035_arifle_Mk20_Black_F;   // Mk20 5.56 mm (Black)

    // -----------------
    // MK-I EMR 7.62 mm
    // -----------------
    // MK-I EMR 7.62 mm (Black)
    class srifle_DMR_03_arco_pointer_F: srifle_DMR_03_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_blk_F";
                slot="CowsSlot";
            };
        };
    };

    // MK-I EMR 7.62 mm (Camo)
    class srifle_DMR_03_multicam_arco_pointer_F: srifle_DMR_03_multicam_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_lush_F";
                slot="CowsSlot";
            };
        };
    };

    // MK-I EMR 7.62 mm (Khaki)
    class srifle_DMR_03_khaki_arco_pointer_F: srifle_DMR_03_khaki_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_lush_F";
                slot="CowsSlot";
            };
        };
    };
    class srifle_DMR_03_khaki_sos_pointer_F: srifle_DMR_03_khaki_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_SOS_khk_F";
                slot="CowsSlot";
            };
        };
    };

    // MK-I EMR 7.62 mm (Sand)
    class srifle_DMR_03_tan_arco_pointer_F: srifle_DMR_03_tan_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco";
                slot="CowsSlot";
            };
        };
    };

    // MK-I EMR 7.62 mm (Woodland)
    class srifle_DMR_03_woodland_arco_pointer_F: srifle_DMR_03_woodland_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_lush_F";
                slot="CowsSlot";
            };
        };
    };

    // MK-I EMR 7.62 mm (Tropic)
    class srifle_DMR_03_tropic_F: srifle_DMR_03_F
    {
        author="kenoxite";
        baseWeapon="srifle_DMR_03_tropic_F";
        scope=2;
        displayName="MK-I EMR 7.62 mm (Tropic)";
        picture="\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_khaki_X_CA.paa";
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\weapons\longrangerifles\dmr_03\data\DMR_03_01_tropic_CO.paa",
            "\CA2035PMC\weapons\longrangerifles\dmr_03\data\DMR_03_02_tropic_CO.paa"
        };
    };
    class srifle_DMR_03_tropic_sos_pointer_F: srifle_DMR_03_tropic_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_SOS_khk_F";
                slot="CowsSlot";
            };
        };
    };
    class srifle_DMR_03_tropic_tws_pointer_F: srifle_DMR_03_tropic_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_tws";
                slot="CowsSlot";
            };
        };
    };

    // MK-I EMR 7.62 mm (Digi Arid)
    class srifle_DMR_03_digiarid_F: srifle_DMR_03_F
    {
        author="kenoxite";
        baseWeapon="srifle_DMR_03_digiarid_F";
        scope=2;
        displayName="MK-I EMR 7.62 mm (Digi Arid)";
        picture="\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_khaki_X_CA.paa";
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\weapons\longrangerifles\dmr_03\data\DMR_03_01_digiarid_CO.paa",
            "\CA2035PMC\weapons\longrangerifles\dmr_03\data\DMR_03_02_digiarid_CO.paa"
        };
    };
    class srifle_DMR_03_digiarid_sos_pointer_F: srifle_DMR_03_digiarid_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_SOS_khk_F";
                slot="CowsSlot";
            };
        };
    };


    // -----------------
    // SPAR-16 5.56 mm
    // -----------------
    // SPAR-16 5.56 mm (Black)
    class arifle_SPAR_01_blk_holo_pointer_F: arifle_SPAR_01_blk_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Holosight_blk_F";
                slot="CowsSlot";
            };
        };
    };
    class arifle_SPAR_01_blk_holo_pointer_snds_F: arifle_SPAR_01_blk_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsMuzzle
            {
                item="muzzle_snds_M";
                slot="MuzzleSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Holosight_blk_F";
                slot="CowsSlot";
            };
        };
    };

    // SPAR-16 5.56 mm (Khaki)
    class arifle_SPAR_01_khk_holo_pointer_F: arifle_SPAR_01_khk_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Holosight_khk_F";
                slot="CowsSlot";
            };
        };
    };
    class arifle_SPAR_01_khk_arco_F: arifle_SPAR_01_khk_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item="optic_arco_lush_F";
                slot="CowsSlot";
            };
        };
    };
    class arifle_SPAR_01_khk_aco_F: arifle_SPAR_01_khk_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item="optic_Aco";
                slot="CowsSlot";
            };
        };
    };
    class arifle_SPAR_01_khk_arco_pointer_F: arifle_SPAR_01_khk_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_arco_lush_F";
                slot="CowsSlot";
            };
        };
    };
    class arifle_SPAR_01_khk_aco_pointer_F: arifle_SPAR_01_khk_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Aco";
                slot="CowsSlot";
            };
        };
    };
    class arifle_SPAR_01_khk_holo_pointer_snds_F: arifle_SPAR_01_khk_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsMuzzle
            {
                item="muzzle_snds_m_khk_F";
                slot="MuzzleSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Holosight_khk_F";
                slot="CowsSlot";
            };
        };
    };

    // SPAR-16 5.56 mm (Sand)
    class arifle_SPAR_01_snd_holo_pointer_F: arifle_SPAR_01_snd_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Holosight";
                slot="CowsSlot";
            };
        };
    };
    class arifle_SPAR_01_snd_holo_pointer_snds_F: arifle_SPAR_01_snd_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsMuzzle
            {
                item="muzzle_snds_m_snd_F";
                slot="MuzzleSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Holosight";
                slot="CowsSlot";
            };
        };
    };

    // SPAR-16 5.56 mm (Digi Arid)
    class arifle_SPAR_01_digiarid_F: arifle_SPAR_01_blk_F
    {
        author="kenoxite";
        baseWeapon="arifle_SPAR_01_digiarid_F";
        scope=2;
        displayName="SPAR-16 5.56 mm (Digi Arid)";
        picture="\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\Weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_digiarid_01_co.paa",
            "\CA2035PMC\Weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_digiarid_02_co.paa"
        };
    };
    class arifle_SPAR_01_digiarid_aco_F: arifle_SPAR_01_digiarid_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item="optic_Aco";
                slot="CowsSlot";
            };
        };
    };
    class arifle_SPAR_01_digiarid_arco_pointer_F: arifle_SPAR_01_digiarid_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_arco_blk_F";
                slot="CowsSlot";
            };
        };
    };

    // SPAR-16 5.56 mm (Tropic)
    class arifle_SPAR_01_trp_F: arifle_SPAR_01_blk_F
    {
        author="kenoxite";
        baseWeapon="arifle_SPAR_01_trp_F";
        scope=2;
        displayName="SPAR-16 5.56 mm (Tropic)";
        picture="\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\Weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_wood1_01_co.paa",
            "\CA2035PMC\Weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_wood1_02_co.paa"
        };
    };
    class arifle_SPAR_01_trp_aco_F: arifle_SPAR_01_trp_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item="optic_Aco";
                slot="CowsSlot";
            };
        };
    };
    class arifle_SPAR_01_trp_holo_F: arifle_SPAR_01_trp_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item="optic_Holosight_lush_F";
                slot="CowsSlot";
            };
        };
    };
    class arifle_SPAR_01_trp_holo_pointer_F: arifle_SPAR_01_trp_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Holosight_lush_F";
                slot="CowsSlot";
            };
        };
    };
    class arifle_SPAR_01_trp_arco_pointer_F: arifle_SPAR_01_trp_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_lush_F";
                slot="CowsSlot";
            };
        };
    };


    // -----------------
    // SPAR-16 GL 5.56 mm
    // -----------------
    // SPAR-16 GL 5.56 mm (Khaki)
    class arifle_SPAR_01_GL_khk_arco_pointer_F: arifle_SPAR_01_GL_khk_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_arco_lush_F";
                slot="CowsSlot";
            };
        };
    };
    // SPAR-16 GL 5.56 mm (Sand)
    class arifle_SPAR_01_GL_snd_holo_pointer_F: arifle_SPAR_01_GL_snd_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Holosight";
                slot="CowsSlot";
            };
        };
    };

    // SPAR-16 GL 5.56 mm (Digi Arid)
    class arifle_SPAR_01_GL_digiarid_F: arifle_SPAR_01_GL_blk_F
    {
        author="kenoxite";
        baseWeapon="arifle_SPAR_01_GL_digiarid_F";
        scope=2;
        displayName="SPAR-16 GL 5.56 mm (Digi Arid)";
        picture="\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_blk_F_X_CA.paa";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\Weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_digiarid_01_co.paa",
            "\CA2035PMC\Weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_digiarid_02_co.paa",
            "\CA2035PMC\Weapons\Rifles\SPAR_01\Data\arifle_spar_01_gl_digiarid_01_co.paa"
        };
    };
    class arifle_SPAR_01_GL_digiarid_arco_pointer_F: arifle_SPAR_01_GL_digiarid_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_arco_blk_F";
                slot="CowsSlot";
            };
        };
    };

    // SPAR-16 GL 5.56 mm (Tropic)
    class arifle_SPAR_01_GL_trp_F: arifle_SPAR_01_GL_blk_F
    {
        author="kenoxite";
        baseWeapon="arifle_SPAR_01_GL_trp_F";
        scope=2;
        displayName="SPAR-16 GL 5.56 mm (Tropic)";
        picture="\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_blk_F_X_CA.paa";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\Weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_wood1_01_co.paa",
            "\CA2035PMC\Weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_wood1_02_co.paa",
            "\CA2035PMC\Weapons\Rifles\SPAR_01\Data\arifle_spar_01_gl_wood1_01_co.paa"
        };
    };
    class arifle_SPAR_01_GL_trp_arco_pointer_F: arifle_SPAR_01_GL_trp_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_arco_lush_F";
                slot="CowsSlot";
            };
        };
    };


    // -----------------
    // AKU-12 7.62 mm
    // -----------------
    // AKU-12 7.62 mm (Lush)
    class arifle_AK12U_lush_arco_pointer_F: arifle_AK12U_lush_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_AK_lush_F";
                slot="CowsSlot";
            };
        };
    };
    // AKU-12 7.62 mm (Arid)
    class arifle_AK12U_arid_arco_pointer_F: arifle_AK12U_arid_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_AK_arid_F";
                slot="CowsSlot";
            };
        };
    };

    // AKU-12 7.62 mm (Tropic)
    class arifle_AK12U_trp_F: arifle_AK12U_F
    {
        author="kenoxite";
        baseWeapon="arifle_AK12U_trp_F";
        scope=2;
        displayName="AKU-12 7.62 mm (Tropic)";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\weapons\Rifles\ak12\data\AK12_ak12_1_tropic.paa",
            "\CA2035PMC\weapons\Rifles\ak12\data\AK12_ak12_2_tropic.paa"
        };
    };
    class arifle_AK12U_trp_arco_pointer_F: arifle_AK12U_trp_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_AK_lush_F";
                slot="CowsSlot";
            };
        };
    };

    // AKU-12 7.62 mm (Digi Arid)
    class arifle_AK12U_digiarid_F: arifle_AK12U_F
    {
        author="kenoxite";
        baseWeapon="arifle_AK12U_digiarid_F";
        scope=2;
        displayName="AKU-12 7.62 mm (Digi Arid)";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\weapons\Rifles\ak12\data\AK12_ak12_1_digiarid.paa",
            "\CA2035PMC\weapons\Rifles\ak12\data\AK12_ak12_2_digiarid.paa"
        };
    };
    class arifle_AK12U_digiarid_arco_pointer_F: arifle_AK12U_digiarid_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_AK_arid_F";
                slot="CowsSlot";
            };
        };
    };


    // -----------------
    // Mk20 5.56 mm
    // -----------------
    // Mk20 5.56 mm (Black)
    class arifle_Mk20_Black_erco_pointer_F: I_CA2035_arifle_Mk20_Black_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_erco_blk_F";
                slot="CowsSlot";
            };
        };
    };
    class arifle_Mk20_Black_tws_pointer_F: I_CA2035_arifle_Mk20_Black_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_tws";
                slot="CowsSlot";
            };
        };
    };


    // -----------------
    // Zafir 7.62 mm
    // -----------------
    class LMG_Zafir_arco_pointer_F: LMG_Zafir_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_blk_F";
                slot="CowsSlot";
            };
        };
    };

    // Zafir 7.62 mm (Tropic)
    class LMG_Zafir_trp_F: LMG_Zafir_F
    {
        author="kenoxite";
        baseWeapon="LMG_Zafir_trp_F";
        scope=2;
        displayName="Zafir 7.62 mm (Tropic)";
        picture="\A3\Weapons_F_Beta\Machineguns\Zafir\Data\UI\gear_Zafir_X_CA.paa";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\weapons\machineguns\data\zafir01_tropic_co.paa",
            "\CA2035PMC\weapons\machineguns\data\zafir02_tropic_co.paa"
        };
    };
    class LMG_Zafir_trp_arco_pointer_F: LMG_Zafir_trp_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_blk_F";
                slot="CowsSlot";
            };
        };
    };

    // Zafir 7.62 mm (Digi Arid)
    class LMG_Zafir_digiarid_F: LMG_Zafir_F
    {
        author="kenoxite";
        baseWeapon="LMG_Zafir_digiarid_F";
        scope=2;
        displayName="Zafir 7.62 mm (Digi Arid)";
        picture="\A3\Weapons_F_Beta\Machineguns\Zafir\Data\UI\gear_Zafir_X_CA.paa";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\weapons\machineguns\data\zafir01_digiarid_co.paa",
            "\CA2035PMC\weapons\machineguns\data\zafir02_digiarid_co.paa"
        };
    };
    class LMG_Zafir_digiarid_arco_pointer_F: LMG_Zafir_digiarid_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Arco_blk_F";
                slot="CowsSlot";
            };
        };
    };


    // -----------------
    // Sting 9 mm
    // -----------------
    class SMG_02_holo_F: SMG_02_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item="optic_Holosight_smg_blk_F";
                slot="CowsSlot";
            };
        };
    };


    // -----------------
    // GM6 Lynx 12.7 mm
    // -----------------
    // GM6 Lynx 12.7 mm (Tropic)
    class srifle_GM6_trp_F: srifle_GM6_F
    {
        author="kenoxite";
        baseWeapon="srifle_GM6_tropic_F";
        scope=2;
        displayName="GM6 Lynx 12.7 mm (Tropic)";
        picture="\A3\Weapons_F_Bootcamp\LongRangeRifles\GM6_camo\data\UI\gear_gm6_X_CA.paa";
        hiddenSelections[]=
        {
            "camo",
            "mat1",
            "mat2"
        };
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\weapons\longrangerifles\gm6\data\gm6_tropic_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "",
            "a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_csat.rvmat",
            "a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_plastic_csat.rvmat"
        };
    };
    class srifle_GM6_trp_LRPS_tna_F: srifle_GM6_trp_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item="optic_LRPS_tna_F";
                slot="CowsSlot";
            };
        };
    };
    class srifle_GM6_trp_tws_tna_F: srifle_GM6_trp_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item="optic_tws";
                slot="CowsSlot";
            };
        };
    };

    // GM6 Lynx 12.7 mm (Digi Arid)
    class srifle_GM6_digiarid_F: srifle_GM6_F
    {
        author="kenoxite";
        baseWeapon="srifle_GM6_digiarid_F";
        scope=2;
        displayName="GM6 Lynx 12.7 mm (Digi Arid)";
        picture="\A3\Weapons_F_Bootcamp\LongRangeRifles\GM6_camo\data\UI\gear_gm6_X_CA.paa";
        hiddenSelections[]=
        {
            "camo",
            "mat1",
            "mat2"
        };
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\weapons\longrangerifles\gm6\data\gm6_digiarid_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "",
            "a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_csat.rvmat",
            "a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_plastic_csat.rvmat"
        };
    };
    class srifle_GM6_digiarid_LRPS_tna_F: srifle_GM6_digiarid_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item="optic_LRPS_tna_F";
                slot="CowsSlot";
            };
        };
    };




/*    // -----------------
    // RPK-12 7.62 mm
    // -----------------
    // RPK-12 7.62 mm (Black)
    class arifle_RPK12_holo_pointer_F: arifle_RPK12_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Holosight_blk_F";
                slot="CowsSlot";
            };
        };
    };
    // RPK-12 7.62 mm (Lush)
    class arifle_RPK12_lush_holo_pointer_F: arifle_RPK12_lush_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Holosight_blk_F";
                slot="CowsSlot";
            };
        };
    };
    // RPK-12 7.62 mm (Arid)
    class arifle_RPK12_arid_holo_pointer_F: arifle_RPK12_arid_F
    {
        author="kenoxite";
        scope=1;
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                item="acc_pointer_IR";
                slot="PointerSlot";
            };
            class LinkedItemsOptic
            {
                item="optic_Holosight_blk_F";
                slot="CowsSlot";
            };
        };
    };*/



// ************
// UNIFORMS
// ************
	class Default;
	class UniformItem;
	class Uniform_Base;
    class U_B_CombatUniform_mcam_vest;
    class U_B_CombatUniform_mcam_tshirt;

    // Combat Fatigues (CADPAT Arid) (Rolled-Up)
    class U_I_CA2035PMC_CombatUniform_CADPATard_rolled: U_B_CombatUniform_mcam_vest
    {
        author="kenoxite";
        scope=2;
        displayName="Combat Fatigues (CADPAT Arid) (Rolled-Up)";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="I_CA2035PMC_Rifleman_CADPATard_UnifBase";
            containerClass="Supply40";
            mass=40;
        };
    };
    // Combat Fatigues (CADPAT Arid) (Tee)
    class U_I_CA2035PMC_CombatUniform_CADPATard_tshirt: U_B_CombatUniform_mcam_tshirt
    {
        author="kenoxite";
        scope=2;
        displayName="Combat Fatigues (CADPAT Arid) (Tee)";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="I_CA2035PMC_Rifleman_CADPATard_tshirt_UnifBase";
            containerClass="Supply40";
            mass=40;
        };
    };

    // Combat Fatigues (CADPAT Tropic) (Rolled-Up)
    class U_I_CA2035PMC_CombatUniform_CADPATtrop_rolled: U_I_CA2035PMC_CombatUniform_CADPATard_rolled
    {
        author="kenoxite";
        scope=2;
        displayName="Combat Fatigues (CADPAT Tropic) (Rolled-Up)";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="I_CA2035PMC_Rifleman_CADPATtrop_UnifBase";
        };
    };
    // Combat Fatigues (CADPAT Tropic) (Tee)
    class U_I_CA2035PMC_CombatUniform_CADPATtrop_tshirt: U_I_CA2035PMC_CombatUniform_CADPATard_tshirt
    {
        author="kenoxite";
        scope=2;
        displayName="Combat Fatigues (CADPAT Tropic) (Tee)";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="I_CA2035PMC_Rifleman_CADPATtrop_tshirt_UnifBase";
        };
    };

    // Combat Fatigues (CADPAT Altis) (Rolled-Up)
    class U_I_CA2035PMC_CombatUniform_CADPATaltis_rolled: U_I_CA2035PMC_CombatUniform_CADPATard_rolled
    {
        author="kenoxite";
        scope=2;
        displayName="Combat Fatigues (CADPAT Altis) (Rolled-Up)";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="I_CA2035PMC_Rifleman_CADPATaltis_UnifBase";
        };
    };
    // Combat Fatigues (CADPAT Altis) (Tee)
    class U_I_CA2035PMC_CombatUniform_CADPATaltis_tshirt: U_I_CA2035PMC_CombatUniform_CADPATard_tshirt
    {
        author="kenoxite";
        scope=2;
        displayName="Combat Fatigues (CADPAT Altis) (Tee)";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="I_CA2035PMC_Rifleman_CADPATaltis_tshirt_UnifBase";
        };
    };

    // Combat Fatigues (Digi Arid) (Rolled-Up)
    class U_I_CA2035PMC_CombatUniform_digiarid_rolled: U_I_CA2035PMC_CombatUniform_CADPATard_rolled
    {
        author="kenoxite";
        scope=2;
        displayName="Combat Fatigues (Digi Arid) (Rolled-Up)";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="I_CA2035PMC_Rifleman_digiarid_UnifBase";
        };
    };
    // Combat Fatigues (Digi Arid) (Tee)
    class U_I_CA2035PMC_CombatUniform_digiarid_tshirt: U_I_CA2035PMC_CombatUniform_CADPATard_tshirt
    {
        author="kenoxite";
        scope=2;
        displayName="Combat Fatigues (Digi Arid) (Tee)";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="I_CA2035PMC_Rifleman_digiarid_tshirt_UnifBase";
        };
    };

    // Combat Fatigues (Woodland) (Rolled-Up)
    class U_I_CA2035PMC_CombatUniform_wdl_rolled: U_I_CA2035PMC_CombatUniform_CADPATard_rolled
    {
        author="kenoxite";
        scope=2;
        displayName="Combat Fatigues (Woodland) (Rolled-Up)";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="I_CA2035PMC_Rifleman_wdl_UnifBase";
        };
    };
    // Combat Fatigues (Woodland) (Tee)
    class U_I_CA2035PMC_CombatUniform_wdl_tshirt: U_I_CA2035PMC_CombatUniform_CADPATard_tshirt
    {
        author="kenoxite";
        scope=2;
        displayName="Combat Fatigues (Woodland) (Tee)";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="I_CA2035PMC_Rifleman_wdl_tshirt_UnifBase";
        };
    };

    // Heli Pilot Coveralls
    class U_I_CA2035PMC_HeliPilotCoveralls: U_I_CA2035PMC_CombatUniform_CADPATard_rolled
    {
        author="kenoxite";
        scope=2;
        displayName="Heli Pilot Coveralls (green) [PMC]";
        picture="\CA2035\characters\data\ui\icon_U_I_CA2035_HeliPilotCoveralls.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="I_CA2035PMC_Rifleman_HeliPilotCoveralls_UnifBase";
            containerClass="Supply40";
            mass=40;
        };
    };


// ************
// HEADGEAR
// ************
	class ItemCore;
	class HeadgearItem;
	class HelmetBase;
    class H_HelmetHBK_headset_F;

    class H_Booniehat_khk_hs;
    class H_Booniehat_mgrn;
    class H_Booniehat_khk;
    class H_Booniehat_oli;
    class H_Booniehat_tan;
    class H_Booniehat_wdl;
    class H_Cap_blk;
    class H_Cap_grn;
    class H_Cap_oli;
    class H_Cap_tan;
    class H_Cap_oli_hs;
    class H_Cap_headphones;

	// FakeHeadgear
	class H_FakeHeadgear_CA2035PMC
	{
		scope=0;
		allowedFacewear[]=
		{
			"",
			"G_Aviator_CA2035PMC",
			"G_Shades_Black_CA2035PMC",
			// "G_Shades_Blue_CA2035PMC",
			// "G_Shades_Green_CA2035PMC",
			// "G_Shades_Red_CA2035PMC",
			// "G_Sport_Blackred_CA2035PMC",
			// "G_Sport_BlackWhite_CA2035PMC",
			// "G_Sport_Blackyellow_CA2035PMC",
			// "G_Sport_Greenblack_CA2035PMC",
			// "G_Sport_Red_CA2035PMC",
			"G_Balaclava_oli_CA2035PMC",
            "G_Balaclava_blk_CA2035PMC",
            "G_Balaclava_combat_CA2035PMC",
            "G_Spectacles_Tinted_CA2035PMC",
            "G_Combat_CA2035PMC",
            "G_Combat_Goggles_tna_F_CA2035PMC",
            "G_Tactical_Clear_CA2035PMC",
            "G_Tactical_Black_CA2035PMC"
		};
	};

    // Vanilla headgear
    class H_Booniehat_khk_hs_CA2035PMC: H_Booniehat_khk_hs
    {
        author="kenoxite";
        modelSides[]={0,1,2,3};
        scope=1;
        ALLOWED_FACEWEAR();
    };
    class H_Booniehat_mgrn_CA2035PMC: H_Booniehat_mgrn
    {
        author="kenoxite";
        modelSides[]={0,1,2,3};
        scope=1;
        ALLOWED_FACEWEAR();
    };
    class H_Booniehat_khk_CA2035PMC: H_Booniehat_khk
    {
        author="kenoxite";
        modelSides[]={0,1,2,3};
        scope=1;
        ALLOWED_FACEWEAR();
    };
    class H_Booniehat_oli_CA2035PMC: H_Booniehat_oli
    {
        author="kenoxite";
        modelSides[]={0,1,2,3};
        scope=1;
        ALLOWED_FACEWEAR();
    };
    class H_Booniehat_tan_CA2035PMC: H_Booniehat_tan
    {
        author="kenoxite";
        modelSides[]={0,1,2,3};
        scope=1;
        ALLOWED_FACEWEAR();
    };
    class H_Booniehat_wdl_CA2035PMC: H_Booniehat_wdl
    {
        author="kenoxite";
        scope=1;
        ALLOWED_FACEWEAR();
    };
    class H_Cap_blk_CA2035PMC: H_Cap_blk
    {
        author="kenoxite";
        modelSides[]={0,1,2,3};
        scope=1;
        ALLOWED_FACEWEAR_HAT();
    };
    class H_Cap_grn_CA2035PMC: H_Cap_grn
    {
        author="kenoxite";
        modelSides[]={0,1,2,3};
        scope=1;
        ALLOWED_FACEWEAR_HAT();
    };
    class H_Cap_oli_CA2035PMC: H_Cap_oli
    {
        author="kenoxite";
        modelSides[]={0,1,2,3};
        scope=1;
        ALLOWED_FACEWEAR_HAT();
    };
    class H_Cap_tan_CA2035PMC: H_Cap_tan
    {
        author="kenoxite";
        modelSides[]={0,1,2,3};
        scope=1;
        ALLOWED_FACEWEAR_HAT();
    };
    class H_Cap_oli_hs_CA2035PMC: H_Cap_oli_hs
    {
        author="kenoxite";
        modelSides[]={0,1,2,3};
        scope=1;
        ALLOWED_FACEWEAR_HAT();
    };
    class H_Cap_headphones_CA2035PMC: H_Cap_headphones
    {
        author="kenoxite";
        modelSides[]={0,1,2,3};
        scope=1;
        ALLOWED_FACEWEAR_HAT();
    };



    // Cap
    class H_Cap_CA2035PMC_CADPATard: H_Cap_oli_hs
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        modelSides[]={0,1,2,3};
        displayName="Cap (CADPAT Arid, Headset)";
        // picture="\CA2035\characters\data\ui\icon_H_Cap_O_CA2035_ghex.paa";
        model="\A3\Characters_F\common\capb";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\common\data\capb_ca2035pmc_cadpatard_co.paa"
        };
        
        ALLOWED_FACEWEAR_HAT();
    };
    class H_Cap_CA2035PMC_CADPATtrop: H_Cap_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Cap (CADPAT Tropic, Headset)";
        // picture="\CA2035\characters\data\ui\icon_H_Cap_O_CA2035_ghex.paa";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\common\data\capb_ca2035pmc_cadpattrp_co.paa"
        };
    };
    class H_Cap_CA2035PMC_digiarid: H_Cap_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Cap (Digi Arid, Headset)";
        // picture="\CA2035\characters\data\ui\icon_H_Cap_O_CA2035_ghex.paa";
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\common\data\capb_ca2035pmc_digiarid_co.paa"
        };
    };

	// Booniehats
	class H_Booniehat_CA2035PMC_CADPATard: H_Booniehat_khk_hs
	{
		author="kenoxite";
		scope=2;
		weaponPoolAvailable=2;
        modelSides[]={0,1,2,3};
		displayName="Booniehat (CADPAT Arid, Headset)";
        // picture="\CA2035PMC\characters\data\ui\icon_H_Booniehat_CA2035PMC_wdl.paa";
		hiddenSelectionsTextures[]=
		{
			BOONIEHAT_ARD();
		};
		
		ALLOWED_FACEWEAR();
	};
    class H_Booniehat_CA2035PMC_CADPATtrop: H_Booniehat_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Booniehat (CADPAT Tropic, Headset)";
        // picture="\CA2035PMC\characters\data\ui\icon_H_Booniehat_CA2035PMC_wdl.paa";
        hiddenSelectionsTextures[]=
        {
            BOONIEHAT_TRP();
        };
    };
    class H_Booniehat_CA2035PMC_digiarid: H_Booniehat_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Booniehat (Digi Arid, Headset)";
        // picture="\CA2035PMC\characters\data\ui\icon_H_Booniehat_CA2035PMC_wdl.paa";
        hiddenSelectionsTextures[]=
        {
            BOONIEHAT_DIGIARID();
        };
    };

	// Advanced Modular Helmet
	class H_HelmetHBK_headset_CA2035PMC_CAPATard: H_HelmetHBK_headset_F
	{
		author="kenoxite";
		scope=2;
		weaponPoolAvailable=2;
		displayName="Advanced Modular Helmet (CADPAT Arid)";
        // picture="\CA2035PMC\characters\data\ui\icon_H_HelmetIA_CA2035PMC_wdl.paa";
		modelSides[]={0,1,2,3};
		hiddenSelectionsTextures[]=
		{
			HELMET_ARD();
		};
        
        ALLOWED_FACEWEAR();
	};
    class H_HelmetHBK_headset_CA2035PMC_green: H_HelmetHBK_headset_CA2035PMC_CAPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Advanced Modular Helmet (Green)";
        // picture="\CA2035PMC\characters\data\ui\icon_H_HelmetIA_CA2035PMC_wdl.paa";
        hiddenSelectionsTextures[]=
        {
            HELMET_GREEN();
        };
    };
    class H_HelmetHBK_headset_CA2035PMC_digiarid: H_HelmetHBK_headset_CA2035PMC_CAPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Advanced Modular Helmet (Digi Arid)";
        // picture="\CA2035PMC\characters\data\ui\icon_H_HelmetIA_CA2035PMC_wdl.paa";
        hiddenSelectionsTextures[]=
        {
            HELMET_DIGIARID();
        };
    };

// ************
// VESTS
// ************
    class VestItem;
	class Vest_Camo_Base;
    class V_CarrierRigKBT_01_light_Olive_F;
    class V_CarrierRigKBT_01_Olive_F;

    // Modular Carrier Lite 
	class V_CarrierRigKBT_01_CA2035PMC_CADPATard: V_CarrierRigKBT_01_light_Olive_F
	{
		author="kenoxite";
		scope=2;
		weaponPoolAvailable=2;
        modelSides[]={0,1,2,3};
		displayName="Modular Carrier Lite (CADPAT Arid)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_ard_co.paa"
		};
    };
    class V_CarrierRigKBT_01_CA2035PMC_CADPATtrp: V_CarrierRigKBT_01_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Modular Carrier Lite (CADPAT Tropic)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_trp_co.paa"
        };
    };
    class V_CarrierRigKBT_01_CA2035PMC_CADPATaltis: V_CarrierRigKBT_01_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Modular Carrier Lite (CADPAT Altis)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_cadpataltis_co.paa"
        };
    };
    class V_CarrierRigKBT_01_CA2035PMC_green: V_CarrierRigKBT_01_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Modular Carrier Lite (Green)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_green_co.paa"
        };
    };
    class V_CarrierRigKBT_01_CA2035PMC_tan: V_CarrierRigKBT_01_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Modular Carrier Lite (Tan)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_desert_co.paa"
        };
    };
    class V_CarrierRigKBT_01_CA2035PMC_black: V_CarrierRigKBT_01_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Modular Carrier Lite (Black)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_black_co.paa"
        };
    };

    // Modular Carrier Vest 
    class V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard: V_CarrierRigKBT_01_Olive_F
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        modelSides[]={0,1,2,3};
        displayName="Modular Carrier Vest (CADPAT Arid)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_ard_co.paa"
        };
    };
    class V_CarrierRigKBT_01_vest_CA2035PMC_CADPATtrp: V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Modular Carrier Vest (CADPAT Tropic)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_trp_co.paa"
        };
    };
    class V_CarrierRigKBT_01_vest_CA2035PMC_CADPATaltis: V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Modular Carrier Vest (CADPAT Altis)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_cadpataltis_co.paa"
        };
    };
    class V_CarrierRigKBT_01_vest_CA2035PMC_green: V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Modular Carrier Vest (Green)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_green_co.paa"
        };
    };
    class V_CarrierRigKBT_01_vest_CA2035PMC_tan: V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Modular Carrier Vest (Tan)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_desert_co.paa"
        };
    };
    class V_CarrierRigKBT_01_vest_CA2035PMC_black: V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard
    {
        author="kenoxite";
        scope=2;
        weaponPoolAvailable=2;
        displayName="Modular Carrier Vest (Black)";
        // picture="\CA2035PMC\characters\data\ui\icon_V_PlateCarrierIA1_CA2035PMC_wdl.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\CA2035PMC\indep\data\equip_i_ca2035pmc_carrierrigkbt_black_co.paa"
        };
    };


// ************
// ITEMS
// ************

    class NVGoggles;
    class ItemCore;
    class UavTerminal_base: ItemCore
    {
        class ItemInfo;
    };

    // UAV Terminal [PMC Indep]
    class I_CA2035PMC_UavTerminal: UavTerminal_base
    {
        author="kenoxite";
        scope=2;
        displayName="UAV Terminal [PMC Indep]";
        model="\a3\Drones_F\Weapons_F_Gamma\Items\uav_controller_civ_f";
        picture="\A3\Drones_F\Weapons_F_Gamma\Items\data\UI\gear_uav_controller_civ_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\A3\Drones_F\Weapons_F_Gamma\Items\data\uav_controller_civ_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            side=2;
        };
    };

    // UAV Terminal [PMC OPFOR]
    class O_CA2035PMC_UavTerminal: I_CA2035PMC_UavTerminal
    {
        author="kenoxite";
        scope=2;
        displayName="UAV Terminal [PMC OPFOR]";
        class ItemInfo: ItemInfo
        {
            side=0;
        };
    };

    // UAV Terminal [PMC BLUFOR]
    class B_CA2035PMC_UavTerminal: I_CA2035PMC_UavTerminal
    {
        author="kenoxite";
        scope=2;
        displayName="UAV Terminal [PMC BLUFOR]";
        class ItemInfo: ItemInfo
        {
            side=1;
        };
    };


    // NV Goggles (hidden)
    class X_CA2035PMC_NVGoggles_Hidden: NVGoggles
    {
        author="kenoxite";
        scope=2;
        displayName="NV Goggles (hidden)";
        modelOptics="\A3\weapons_f\reticle\optics_night";
        model="\A3\Weapons_f\binocular\nvg_proxy_OPFOR";
        picture="\A3\Weapons_F\Data\UI\gear_nvg_opfor_CA.paa";
        visionMode[]=
        {
            "Normal",
            "NVG"
        };
        class ItemInfo
        {
            type=616;
            uniformModel="A3\weapons_f\binocular\nvg_proxy_OPFOR.p3d";
            modelOff="";
            mass=20;
        };
    };