class CfgPatches
{
	class 11th_backpacks
	{
		units[] =
		{
			
		};
		weapons[] =
		{
			"",
		};
		requiredAddons[] = {};
		
	};
};

class CfgWeapons
{
	class OPTRE_ILCS_Rucksack_Black;
	class BackpackItem;
	class 11th_Backpack_Base: OPTRE_ILCS_Rucksack_Black
	{
		author = "Saiko";
		displayName = "[11th] ODST Rucksack (Black)";
		hiddenSelections[] = 
		{
			"camo1",
			"AP_Heavy",
			"biofoam"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"
		};
	};
};