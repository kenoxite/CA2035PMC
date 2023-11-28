        class BLU_CA2035PMC
        {
            name = "PMC (Central Africa)";
            class Infantry
            {
                name="$STR_A3_CfgGroups_West_BLU_F_Infantry0";

                class B_CA2035PMC_Team
                {
                    name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
                    side=1;
                    faction="BLU_CA2035PMC";
                    icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_AR_F";
                        rank="SERGEANT";
                        position[]={0,0,0};
                    };
                    class Unit1
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_M_F";
                        rank="CORPORAL";
                        position[]={5,-5,0};
                    };
                    class Unit2
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_F";
                        rank="PRIVATE";
                        position[]={-5,-5,0};
                    };
                };
                
                class B_CA2035PMC_Sentry
                {
                    name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
                    side=1;
                    faction="BLU_CA2035PMC";
                    icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_M_F";
                        rank="CORPORAL";
                        position[]={0,0,0};
                    };
                    class Unit1
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_lite_F";
                        rank="PRIVATE";
                        position[]={5,-5,0};
                    };
                };

                class B_CA2035PMC_Assault
                {
                    name="Assault Team";
                    side=1;
                    faction="BLU_CA2035PMC";
                    icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_TL_F";
                        rank="SERGEANT";
                        position[]={0,0,0};
                    };
                    class Unit1
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_AR_F";
                        rank="CORPORAL";
                        position[]={5,-5,0};
                    };
                    class Unit2
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Medic_F";
                        rank="PRIVATE";
                        position[]={-5,-5,0};
                    };
                    class Unit3
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_LAT_F";
                        rank="CORPORAL";
                        position[]={10,-10,0};
                    };
                    class Unit4
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_F";
                        rank="PRIVATE";
                        position[]={-10,-10,0};
                    };
                    class Unit5
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_M_F";
                        rank="PRIVATE";
                        position[]={15,-15,0};
                    };
                };

                class B_CA2035PMC_SniperTeam
                {
                    name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
                    side=1;
                    faction="BLU_CA2035PMC";
                    icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    class Unit1
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Sniper_F";
                        rank="SERGEANT";
                        position[]={0,0,0};
                    };
                    class Unit2
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_M_F";
                        rank="CORPORAL";
                        position[]={5,-5,0};
                    };
                };

                class B_CA2035PMC_SmallTeam_UAV
                {
                    name="$STR_A3_cfggroups_uavteam_smallUAV";
                    side=1;
                    faction="BLU_CA2035PMC";
                    icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
                    {
                        side=1;
                        vehicle="B_CA2035PMC_soldier_UAV_F";
                        rank="SERGEANT";
                        position[]={0,0,0};
                    };
                    class Unit1
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_Repair_F";
                        rank="CORPORAL";
                        position[]={5,-5,0};
                    };
                    class Unit2
                    {
                        side=1;
                        vehicle="B_CA2035PMC_UAV_01_F";
                        rank="PRIVATE";
                        position[]={-5,-5,0};
                    };
                };

                class B_CA2035PMC_AttackTeam_UGV
                {
                    name="$STR_A3_cfggroups_uavteam_attackUGV";
                    side=1;
                    faction="BLU_CA2035PMC";
                    icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
                    {
                        side=1;
                        vehicle="B_CA2035PMC_soldier_UAV_F";
                        rank="SERGEANT";
                        position[]={0,0,0};
                    };
                    class Unit1
                    {
                        side=1;
                        vehicle="B_CA2035PMC_Soldier_Repair_F";
                        rank="CORPORAL";
                        position[]={5,-5,0};
                    };
                    class Unit2
                    {
                        side=1;
                        vehicle="B_CA2035PMC_UGV_01_rcws_F";
                        rank="PRIVATE";
                        position[]={-5,-5,0};
                    };
                };
            };

            // class SpecOps
            // {
            //     name="$STR_A3_CfgGroups_West_BLU_F_SpecOps0";

            // };
        };