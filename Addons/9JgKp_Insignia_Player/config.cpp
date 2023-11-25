class CfgPatches
{
	class 9JgKp_Insignia_Player
	{
		// Meta information for editor
		name = "Insignien der European Defence Force";
		author = "[EuDef]Nilia";
		url = "https://github.com/Nilia119/EuDef-Inisgnia";

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

class 9JgKp_Insignia_Logo;

/* Beispiel:

  class 9Jgkp_Insignia_NAME: 9JgKp_Insignia_Logo
    {
      displayName = "ANZEIGENAME DES PATCHES";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\SPIELERNAME.paa";
	  author="Nilia";
  };
  */

class CfgUnitInsignia {

  class EuDef_Insignia_Nilia: EuDef_Insignia_Logo
    {
      displayName = "EuDef Nilia";
      texture = "\EuDef_Insignia_Player\Player\Bilder\Nilia.paa";
	  author="Nilia";
  };

	class 9Jgkp_Insignia_NATO: 9JgKp_Insignia_Logo
	{
	  displayName = "9. JgKp NATO";
	  texture = "\9JgKp_Insignia_Player\Player\Bilder\NATO.paa";
	  texture = "\EuDef_Insignia_Player\Player\Bilder\NATO.paa";
	  author="Nilia/Fflluuffyy";
  };

	class EuDef_Insignia_Fox: EuDef_Insignia_Logo
	{
	  displayName = "EuDef Fox";
	  texture = "\EuDef_Insignia_Player\Player\Bilder\Fox.paa";
	  author="Nilia";
  };

	class EuDef_Insignia_Juggernaut: EuDef_Insignia_Logo
    {
      displayName = "EuDef Juggernaut";
      texture = "\EuDef_Insignia_Player\Player\Bilder\Juggernaut.paa";
	  author="Nilia";
  };

	class 9Jgkp_Insignia_EwL: 9JgKp_Insignia_Logo
    {
      displayName = "EuDef Black";
      texture = "\EuDef_Insignia_Player\Player\Bilder\Black.paa";
	  author="Nilia";
  };

	class EuDef_Insignia_Plutokratie: EuDef_Insignia_Logo
    {
      displayName = "EuDef Plutokratie";
      texture = "\EuDef_Insignia_Player\Player\Bilder\Plutokratie.paa";
	  author="Nilia";
  };

	class EuDef_Insignia_Toyo: EuDef_Insignia_Logo
    {
      displayName = "EuDef Toyo";
      texture = "\EuDef_Insignia_Player\Player\Bilder\Toyo.paa";
	  author="Nilia";
  };

	class 9Jgkp_Insignia_Farid_Khaleel: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Farid Khaleel";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\Farid_Khaleel.paa";
	  author="Nilia";
  };


 class EuDef_Insignia_Manuel: EuDef_Insignia_Logo
    {
      displayName = "EuDef Manuel";
      texture = "\EuDef_Insignia_Player\Player\Bilder\Manuel.paa";
	  author="Nilia";
  };


 class 9Jgkp_Insignia_SamKing: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Sam King";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\SamKing.paa";
	  author="Nilia";
  };


    class 9Jgkp_Insignia_CC: 9JgKp_Insignia_Logo
    {
        displayName = "9. JgKp Crasy Consti";
        texture = "\9JgKp_Insignia_Player\Player\Bilder\CrasyConsti.paa";
        author="Nilia";
    };

    class 9Jgkp_Insignia_Paul: 9JgKp_Insignia_Logo
    {
        displayName = "9. JgKp Paul";
        texture = "\9JgKp_Insignia_Player\Player\Bilder\Paul.paa";
        author="Nilia";
    };



//HIER In der nächsten Zeile einfügen


//Über mir!
};
