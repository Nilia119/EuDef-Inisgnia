class CfgPatches
{
	class 9JgKp_Insignia_Player
	{
		// Meta information for editor
		name = "Insignien der 9. Jägerkompanie";
		author = "[9.JgKp]Nilia";
		url = "https://github.com/Nilia119/9JgKp-Inisgnia";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = {"9JgKp_Insignia_Base"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class 9JgKp_Insiginia_Base;

/* Beispiel:
  class 9Jgkp_Insignia_NAME: 9JgKp_Insiginia_Base

    {
      displayName = "ANZEIGENAME DES PATCHES";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\SPIELERNAME.paa";
  };
  */

class CfgUnitInsignia {

  class 9Jgkp_Insignia_Nilia: 9JgKp_Insiginia_Base

    {
      displayName = "9. JgKp Nilia";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\Nilia.paa";
  };
//HIER In der nächsten Zeile einfügen


//Über mir!
};
