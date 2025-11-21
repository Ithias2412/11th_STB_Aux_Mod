class CfgPatches
{
	class 11th_Uniforms
	{
		units[] =
		{
			"",
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
	class OPTRE_UNSC_Army_Uniform_BLK_SlimLeg;
	class UniformItem;
	class 11th_Uniforms_Base: OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
	{
		author = "Ithias";
		displayName = "[11th] ODST Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="11th_Uniforms_Base_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
};

class CfgVehicles
{
	class OPTRE_UNSC_Army_Soldier_BLK_SlimLeg;
	class 11th_Uniforms_Base_Veh: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
	{
		uniformClass="11th_Uniforms_Base";
	};
};