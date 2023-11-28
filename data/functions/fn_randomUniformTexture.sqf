/*
Author: kenoxite

Description:
Applies random textures to the unit's uniform, as long as it wears the original uniform defined in its config

Parameter(s):
_this select 0: Object - Unit
_this select 1: uniform type
_this select 2: vest type

Returns:
Bool
*/
params [["_unit", objNull, [objNull]], ["_uniformClass","", [""]], ["_vest","", [""]]];

if (isNull _unit) exitWith {
    false
};

// Disabled conditions
if (!local _unit) exitWith {true};

//--- No randomization directly in the Eden Editor and when custom loadout was set
if (is3DEN || _unit getvariable ["saved3DENInventory",false]) exitwith {true};

private _randomizationDisabled = getArray (missionConfigFile >> "disableRandomization") findIf {
    _unit isKindOf _x || {(vehicleVarName _unit) isEqualTo _x}
} != -1;

if (_randomizationDisabled || {!(_unit getVariable ["BIS_enableRandomization", true])}) exitWith {true};

if (_uniformClass != "") then {
    private _randomTexturesTop = [];
    private _randomTexturesBottom = [];

    if (_uniformClass == "rolled") then { 
        _randomTexturesTop = [
                "\CA2035PMC\indep\data\i_ca2035pmc_cadpataltis_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_cadpatard_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_cadpatard_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_cadpattrop_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_wdl_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_digiarid_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_digiarid_clothing_co.paa"
            ];
    };
    if (_uniformClass == "tshirt") then {  
         _randomTexturesTop = [
                "\CA2035PMC\indep\data\i_ca2035pmc_cadpataltis_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_cadpatard_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_cadpatard_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_cadpattrop_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_wdl_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_digiarid_clothing_co.paa",
                "\CA2035PMC\indep\data\i_ca2035pmc_digiarid_clothing_co.paa"
            ];
         _randomTexturesBottom = [
                "\CA2035PMC\indep\data\ca2035pmc_basicbody_browngreen_co.paa",
                "\CA2035PMC\indep\data\ca2035pmc_basicbody_browngreen_co.paa",
                "\CA2035PMC\indep\data\ca2035pmc_basicbody_cadpataltis_co.paa",
                "\CA2035PMC\indep\data\ca2035pmc_basicbody_cadpatard_co.paa",
                "\CA2035PMC\indep\data\ca2035pmc_basicbody_cadpattrp_co.paa",
                "\CA2035PMC\indep\data\ca2035pmc_basicbody_green_co.paa",
                "\CA2035PMC\indep\data\ca2035pmc_basicbody_wdl_co.paa",
                "\CA2035PMC\indep\data\ca2035pmc_basicbody_digiarid_co.paa"
            ];
    };

    if ((count _randomTexturesTop) > 0) then { _unit setObjectTexture [0, selectRandom _randomTexturesTop] };
    if ((count _randomTexturesBottom) > 0) then { _unit setObjectTexture [1, selectRandom _randomTexturesBottom] };
};

if (_vest == "") exitWith {true};

private _randomVest = [];
if (_vest == "vest") then {
     _randomVest = [
                        // "V_CarrierRigKBT_01_Olive_F",                  
                        // "V_PlateCarrierIA1_CA2035_black",
                        // "V_PlateCarrierIA1_CA2035_brown",
                        "V_PlateCarrierIA1_CA2035_green",
                        "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATard",
                        "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATtrp",
                        "V_CarrierRigKBT_01_vest_CA2035PMC_CADPATaltis",
                        "V_CarrierRigKBT_01_vest_CA2035PMC_green",
                        // "V_CarrierRigKBT_01_vest_CA2035PMC_tan",
                        "V_CarrierRigKBT_01_vest_CA2035PMC_black"
                    ];
};
if (_vest == "full") then {
    _randomVest = [
                        "V_PlateCarrier1_rgr_noflag_F",
                        // "V_CarrierRigKBT_01_light_Olive_F",
                        // "V_PlateCarrierIA2_CA2035_black",
                        // "V_PlateCarrierIA2_CA2035_brown",
                        "V_PlateCarrierIA2_CA2035_green",
                        "V_CarrierRigKBT_01_CA2035PMC_CADPATard",
                        "V_CarrierRigKBT_01_CA2035PMC_CADPATtrp",
                        "V_CarrierRigKBT_01_CA2035PMC_CADPATaltis",
                        "V_CarrierRigKBT_01_CA2035PMC_green",
                        // "V_CarrierRigKBT_01_CA2035PMC_tan",
                        "V_CarrierRigKBT_01_CA2035PMC_black"
                    ];
};

private _vestItems = vestItems _unit;
removeVest _unit;
_unit addVest (selectRandom _randomVest);
{ _unit addItemToVest _x } forEach _vestItems;

true

