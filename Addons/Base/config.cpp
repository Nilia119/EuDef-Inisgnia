class CfgPatches
{
	class 9JgKp_Insiginia
	{
		// Meta information for editor
		name = "Insignien der 9. Jägerkompanie";
		author = "Nilia";
		url = "https://github.com/Nilia119/9JgKp-Inisgnia";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = { "A3_Functions_F" };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgUnitInsignia
{
	class 9JgKp_Jaeger
	{
		displayName="00 Jäger";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_00_jaeger_ca.paa";
		textureVehicle="";
	};
}
