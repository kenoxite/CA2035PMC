#include "basicDefines.hpp"
#include "definitions.hpp"

class CfgFactionClasses {
    class IND_CA2035PMC {
        displayName = "PMC (Central Africa)";
        priority=2;
        side = 2;
        icon = "\CA2035PMC\data\factionicons\icon_CA2035pmc_ca.paa";
        flag = "\CA2035PMC\data\flags\flag_CA2035pmc_co.paa";
    };
    class BLU_CA2035PMC {
        displayName = "PMC (Central Africa)";
        priority=2;
        side = 1;
        icon = "\CA2035PMC\data\factionicons\icon_CA2035pmc_ca.paa";
        flag = "\CA2035PMC\data\flags\flag_CA2035pmc_co.paa";
    };
    class OPF_CA2035PMC {
        displayName = "PMC (Central Africa)";
        priority=2;
        side = 0;
        icon = "\CA2035PMC\data\factionicons\icon_CA2035pmc_ca.paa";
        flag = "\CA2035PMC\data\flags\flag_CA2035pmc_co.paa";
    };
};

class CfgPatches {
      class CA2035PMC {
            units[] = {
                "I_CA2035PMC_Soldier_F",
                "I_CA2035PMC_Soldier_lite_F",
                "I_CA2035PMC_Soldier_AR_F",
                "I_CA2035PMC_Soldier_M_F",
                "I_CA2035PMC_Medic_F",
                "I_CA2035PMC_Soldier_UAV_F",
                "I_CA2035PMC_Soldier_TL_F",
                "I_CA2035PMC_Soldier_LAT_F",
                // "I_CA2035PMC_Engineer_F",
                "I_CA2035PMC_Soldier_Exp_F",
                "I_CA2035PMC_Soldier_Repair_F",
                "I_CA2035PMC_HeliPilot_F",
                "I_CA2035PMC_Sniper_F",
                "I_CA2035PMC_Leader_F",

                "O_CA2035PMC_Soldier_F",
                "O_CA2035PMC_Soldier_lite_F",
                "O_CA2035PMC_Soldier_AR_F",
                "O_CA2035PMC_Soldier_M_F",
                "O_CA2035PMC_Medic_F",
                "O_CA2035PMC_Soldier_UAV_F",
                "O_CA2035PMC_Soldier_TL_F",
                "O_CA2035PMC_Soldier_LAT_F",
                "O_CA2035PMC_Soldier_Exp_F",
                "O_CA2035PMC_Soldier_Repair_F",
                "O_CA2035PMC_HeliPilot_F",
                "O_CA2035PMC_Sniper_F",
                "O_CA2035PMC_Leader_F",

                "B_CA2035PMC_Soldier_F",
                "B_CA2035PMC_Soldier_lite_F",
                "B_CA2035PMC_Soldier_AR_F",
                "B_CA2035PMC_Soldier_M_F",
                "B_CA2035PMC_Medic_F",
                "B_CA2035PMC_Soldier_UAV_F",
                "B_CA2035PMC_Soldier_TL_F",
                "B_CA2035PMC_Soldier_LAT_F",
                "B_CA2035PMC_Soldier_Exp_F",
                "B_CA2035PMC_Soldier_Repair_F",
                "B_CA2035PMC_HeliPilot_F",
                "B_CA2035PMC_Sniper_F",
                "B_CA2035PMC_Leader_F",

                "I_CA2035PMC_Offroad_01_armed_F",
                "I_CA2035PMC_Offroad_01_covered_F",
                "I_CA2035PMC_Quad_Bike_F",
                "I_CA2035PMC_Heli_Light_01_F",
                "I_CA2035PMC_Boat_Transport_01_F",
                "I_CA2035PMC_Mortar_01_F",
                "I_CA2035PMC_HMG_02_F",
                "I_CA2035PMC_HMG_02_high_F",
                "I_CA2035PMC_static_AT_F",
                "I_CA2035PMC_UAV_01_F",
                "I_CA2035PMC_UGV_01_rcws_F",

                "O_CA2035PMC_Offroad_01_armed_F",
                "O_CA2035PMC_Offroad_01_covered_F",
                "O_CA2035PMC_Quad_Bike_F",
                "O_CA2035PMC_Heli_Light_01_F",
                "O_CA2035PMC_Boat_Transport_01_F",
                "O_CA2035PMC_Mortar_01_F",
                "O_CA2035PMC_HMG_02_F",
                "O_CA2035PMC_HMG_02_high_F",
                "O_CA2035PMC_static_AT_F",
                "O_CA2035PMC_UAV_01_F",
                "O_CA2035PMC_UGV_01_rcws_F",

                "B_CA2035PMC_Offroad_01_armed_F",
                "B_CA2035PMC_Offroad_01_covered_F",
                "B_CA2035PMC_Quad_Bike_F",
                "B_CA2035PMC_Heli_Light_01_F",
                "B_CA2035PMC_Boat_Transport_01_F",
                "B_CA2035PMC_Mortar_01_F",
                "B_CA2035PMC_HMG_02_F",
                "B_CA2035PMC_HMG_02_high_F",
                "B_CA2035PMC_static_AT_F",
                "B_CA2035PMC_UAV_01_F",
                "B_CA2035PMC_UGV_01_rcws_F",

                "Item_U_I_CA2035PMC_CombatUniform_CADPATard_rolled",
                "Item_U_I_CA2035PMC_CombatUniform_CADPATard_tshirt",
                
                "Item_U_I_CA2035PMC_CombatUniform_CADPATtrop_rolled",
                "Item_U_I_CA2035PMC_CombatUniform_CADPATtrop_tshirt",
                
                "Item_U_I_CA2035PMC_CombatUniform_CADPATaltis_rolled",
                "Item_U_I_CA2035PMC_CombatUniform_CADPATaltis_tshirt",
                
                "Item_U_I_CA2035PMC_CombatUniform_digiarid_rolled",
                "Item_U_I_CA2035PMC_CombatUniform_digiarid_tshirt",
                
                "Item_U_I_CA2035PMC_CombatUniform_wdl_rolled",
                "Item_U_I_CA2035PMC_CombatUniform_wdl_tshirt",

                "Item_U_I_CA2035PMC_HeliPilotCoveralls",

                "Vest_V_CarrierRigKBT_01_CA2035PMC_CADPATard",
                "Vest_V_CarrierRigKBT_01_CA2035PMC_CADPATtrp",
                "Vest_V_CarrierRigKBT_01_CA2035PMC_CADPATaltis",
                "Vest_V_CarrierRigKBT_01_CA2035PMC_green",
                "Vest_V_CarrierRigKBT_01_CA2035PMC_tan",
                "Vest_V_CarrierRigKBT_01_CA2035PMC_black",
                "Vest_V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard",
                "Vest_V_CarrierRigKBT_01_vest_CA2035PMC_CADPATtrp",
                "Vest_V_CarrierRigKBT_01_vest_CA2035PMC_CADPATaltis",
                "Vest_V_CarrierRigKBT_01_vest_CA2035PMC_green",
                "Vest_V_CarrierRigKBT_01_vest_CA2035PMC_black",

                "Headgear_H_Cap_CA2035PMC_CADPATard",
                "Headgear_H_Cap_CA2035PMC_CADPATtrop",
                "Headgear_H_Cap_CA2035PMC_digiarid",
                "Headgear_H_Booniehat_CA2035PMC_CADPATard",
                "Headgear_H_Booniehat_CA2035PMC_CADPATtrop",
                "Headgear_H_Booniehat_CA2035PMC_digiarid",
                "Headgear_H_HelmetHBK_headset_CA2035PMC_CAPATard",
                "Headgear_H_HelmetHBK_headset_CA2035PMC_digiarid",
                "Headgear_H_HelmetHBK_headset_CA2035PMC_green",

                "Weapon_srifle_DMR_03_tropic_F",
                "Weapon_srifle_DMR_03_digiarid_F",

                "Weapon_arifle_SPAR_01_trp_F",
                "Weapon_arifle_SPAR_01_digiarid_F",

                "Weapon_arifle_SPAR_01_GL_trp_F",
                "Weapon_arifle_SPAR_01_GL_digiarid_F",
                
                "Weapon_arifle_AK12U_trp_F",
                "Weapon_arifle_AK12U_digiarid_F",
                
                "Weapon_LMG_Zafir_trp_F",
                "Weapon_LMG_Zafir_digiarid_F",
                
                "Weapon_srifle_GM6_trp_F",
                "Weapon_srifle_GM6_digiarid_F",

                "I_CA2035PMC_UAV_01_backpack_F",
                "O_CA2035PMC_UAV_01_backpack_F",
                "B_CA2035PMC_UAV_01_backpack_F",

                "Item_I_CA2035PMC_UavTerminal",
                "Item_O_CA2035PMC_UavTerminal",
                "Item_B_CA2035PMC_UavTerminal",

                "Item_X_CA2035PMC_NVGoggles_Hidden",

                "IND_CA2035PMC_AmmoBox",
                "IND_CA2035PMC_WeaponsBox",
                "IND_CA2035PMC_LaunchersBox",
                "IND_CA2035PMC_UniformBox",
                "IND_CA2035PMC_SupportBox",
                "IND_CA2035PMC_SupplyBox"
            };
            weapons[] = {
                "arifle_SPAR_01_digiarid_F",
                "arifle_SPAR_01_digiarid_aco_F",
                "arifle_SPAR_01_digiarid_arco_pointer_F",

                "arifle_SPAR_01_GL_digiarid_F",
                "arifle_SPAR_01_GL_digiarid_arco_pointer_F",
                
                "arifle_SPAR_01_trp_F",
                "arifle_SPAR_01_trp_aco_F",
                "arifle_SPAR_01_trp_holo_F",
                "arifle_SPAR_01_trp_holo_pointer_F",
                "arifle_SPAR_01_trp_arco_pointer_F",

                "arifle_SPAR_01_GL_trp_F",
                "arifle_SPAR_01_GL_trp_arco_pointer_F",

                "srifle_DMR_03_arco_pointer_F",
                "srifle_DMR_03_multicam_arco_pointer_F",
                "srifle_DMR_03_khaki_arco_pointer_F",
                "srifle_DMR_03_tan_arco_pointer_F",
                "srifle_DMR_03_woodland_arco_pointer_F",

                "srifle_DMR_03_khaki_sos_pointer_F",

                "srifle_DMR_03_tropic_F",
                "srifle_DMR_03_tropic_sos_pointer_F",
                "srifle_DMR_03_tropic_tws_pointer_F",

                "srifle_DMR_03_digiarid_F",
                "srifle_DMR_03_digiarid_sos_pointer_F",

                "arifle_SPAR_01_blk_holo_pointer_F",
                "arifle_SPAR_01_blk_holo_pointer_snds_F",
                "arifle_SPAR_01_khk_holo_pointer_F",
                "arifle_SPAR_01_khk_holo_pointer_snds_F",
                "arifle_SPAR_01_snd_holo_pointer_F",
                "arifle_SPAR_01_snd_holo_pointer_snds_F",
                
                "arifle_SPAR_01_khk_arco_F",
                "arifle_SPAR_01_khk_arco_pointer_F",
                
                "arifle_SPAR_01_khk_aco_F",
                "arifle_SPAR_01_khk_aco_pointer_F",

                "arifle_SPAR_01_GL_khk_arco_pointer_F",
                "arifle_SPAR_01_GL_snd_holo_pointer_F",

                "arifle_AK12U_lush_arco_pointer_F",
                "arifle_AK12U_arid_arco_pointer_F",

                "arifle_AK12U_trp_F",
                "arifle_AK12U_trp_arco_pointer_F",
                
                "arifle_AK12U_digiarid_F",
                "arifle_AK12U_digiarid_arco_pointer_F",

                "LMG_Zafir_arco_pointer_F",

                "LMG_Zafir_trp_F",
                "LMG_Zafir_trp_arco_pointer_F",
                
                "LMG_Zafir_digiarid_F",
                "LMG_Zafir_digiarid_arco_pointer_F",

                "SMG_02_holo_F",

                "srifle_GM6_trp_F",
                "srifle_GM6_trp_LRPS_tna_F",
                "srifle_GM6_trp_tws_tna_F",
                "srifle_GM6_digiarid_F",
                "srifle_GM6_digiarid_LRPS_tna_F",

                "arifle_Mk20_Black_erco_pointer_F",
                "arifle_Mk20_Black_tws_pointer_F",

                "U_I_CA2035PMC_CombatUniform_CADPATard_rolled",
                "U_I_CA2035PMC_CombatUniform_CADPATard_tshirt",

                "U_I_CA2035PMC_CombatUniform_CADPATtrop_rolled",
                "U_I_CA2035PMC_CombatUniform_CADPATtrop_tshirt",

                "U_I_CA2035PMC_CombatUniform_CADPATaltis_rolled",
                "U_I_CA2035PMC_CombatUniform_CADPATaltis_tshirt",

                "U_I_CA2035PMC_CombatUniform_digiarid_rolled",
                "U_I_CA2035PMC_CombatUniform_digiarid_tshirt",

                "U_I_CA2035PMC_CombatUniform_wdl_rolled",
                "U_I_CA2035PMC_CombatUniform_wdl_tshirt",

                "U_I_CA2035PMC_HeliPilotCoveralls",

                "V_CarrierRigKBT_01_CA2035PMC_CADPATard",
                "V_CarrierRigKBT_01_CA2035PMC_CADPATtrp",
                "V_CarrierRigKBT_01_CA2035PMC_CADPATaltis",
                "V_CarrierRigKBT_01_CA2035PMC_green",
                "V_CarrierRigKBT_01_CA2035PMC_tan",
                "V_CarrierRigKBT_01_CA2035PMC_black",
                "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard",
                "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATtrp",
                "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATaltis",
                "V_CarrierRigKBT_01_vest_CA2035PMC_green",
                "V_CarrierRigKBT_01_vest_CA2035PMC_tan",
                "V_CarrierRigKBT_01_vest_CA2035PMC_black",

                "H_Cap_CA2035PMC_CADPATard",
                "H_Cap_CA2035PMC_CADPATtrop",
                "H_Cap_CA2035PMC_digiarid",
                "H_Booniehat_CA2035PMC_CADPATard",
                "H_Booniehat_CA2035PMC_CADPATtrop",
                "H_Booniehat_CA2035PMC_digiarid",
                "H_HelmetHBK_headset_CA2035PMC_CAPATard",
                "H_HelmetHBK_headset_CA2035PMC_digiarid",
                "H_HelmetHBK_headset_CA2035PMC_green",

                "I_CA2035PMC_UavTerminal",
                "O_CA2035PMC_UavTerminal",
                "B_CA2035PMC_UavTerminal",

                "X_CA2035PMC_NVGoggles_Hidden"
            };
            requiredVersion = 1.62;
            requiredAddons[] = {
                  "A3_Characters_F",
                  "A3_Characters_F_Exp",
                  "A3_Sounds_F",
                  "A3_Sounds_F_Exp",
                  "A3_Data_F",
                  "A3_Data_F_Curator",
                  "A3_Air_F",
                  "A3_Soft_F",
                  "A3_Soft_F_Beta",
                  "A3_Soft_F_Gamma",
                  "A3_Soft_F_Exp",
                  "A3_Soft_F_EPC",
                  "A3_Armor_F_Beta",
                  "A3_Armor_F_Gamma",
                  "A3_Armor_F_EPB",
                  "A3_Air_F_EPB",
                  "A3_Static_F",
                  "A3_Boat_F",
                  "A3_Boat_F_Beta",
                  "A3_Boat_F_Exp",
                  "A3_Soft_F_Enoch",
                  "A3_Weapons_F_Enoch",
                  "A3_Characters_F_Enoch",
                  "CA2035"
            };

            name = "2035 Central Africa - PMC";
            author = "kenoxite";
            authors[] = {"kenoxite"};
            // url = "";
            version = "1.0.4.2";
      };
};

class cfgWeapons
{
#include "cfgWeapons.hpp"
};

class CfgVehicles {

// BACKPACKS
#include "backpacks.hpp"

// INFANTRY
    class I_Soldier_base_F;

// LanguageENG_F
// LanguagePER_F
// LanguageGRE_F
// LanguageENGB_F
// LanguageFRE_F
// LanguageENGFRE_F
// LanguageCHI_F
// LanguageRUS_F
// LanguagePOL_F
// LanguageENGVR_F
// LanguageGREVR_F
// LanguagePERVR_F

// PMC units
#include "uniforms_v.hpp"
#include "pmc_i.hpp"
#include "pmc_o.hpp"
#include "pmc_b.hpp"

// VEHICLES
#include "vehicles_i.hpp"
#include "vehicles_o.hpp"
#include "vehicles_b.hpp"

// ITEMS
#include "items.hpp"

// CRATES
#include "crates.hpp"

// STRUCTURES
// #include "structures.hpp"

};


#include "cfgGlasses.hpp"

class CfgGroups {
      class West
      {
            // name="$STR_A3_CfgGroups_West0";
            // side=1;
#include "CfgGroups_b_pmc.hpp"
      };
    class Indep {
        // name="$STR_A3_CfgGroups_Indep0";
        // side=2;
#include "CfgGroups_i_pmc.hpp"
    };

    class East {
        // name="$STR_A3_CfgGroups_East0";
        // side=0;
#include "CfgGroups_o_pmc.hpp"
    };
};

class CfgFunctions
{
  class CA2035PMC
  {
    tag="CA2035PMC";
    class functions { //Category
      file = "CA2035PMC\data\functions"; //Folder path the following functions are found in
      class randomUniformTexture {}; //function .sqf file name, minus proceeding fn_ 
    };
  };
};