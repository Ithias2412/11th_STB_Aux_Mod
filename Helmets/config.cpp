class CfgPatches
{
	class 11th_helmets
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
	class OPTRE_UNSC_CH252D_Helmet;
	class HelmetItem; 
	class 11th_Helmet_Base: OPTRE_UNSC_CH252D_Helmet
	{
		author = "Saiko";
		displayName = "[11th] ODST Helmet";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_Aux_Mod\Helmets\Tex\hades_platoon_helmet_co.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
};