class CfgPatches
{
	class EuDef_Insignia_Player
	{
		// Meta information for editor
		name = "Insignien der European Defence Force";
		author = "[EuDef]Nilia";
		url = "https://github.com/Nilia119/EuDef-Inisgnia";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = {"EuDef_Insignia_Base"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class EuDef_Insignia_Logo;

/* Beispiel:

  class EuDef_Insignia_NAME: EuDef_Insignia_Logo
    {
      displayName = "ANZEIGENAME DES PATCHES";
      texture = "\EuDef_Insignia_Player\Player\Bilder\SPIELERNAME.paa";
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

	class EuDef_Insignia_NATO: EuDef_Insignia_Logo
	{
	  displayName = "EuDef NATO";
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


 class EuDef_Insignia_SamKing: EuDef_Insignia_Logo
    {
      displayName = "EuDef Sam King";
      texture = "\EuDef_Insignia_Player\Player\Bilder\SamKing.paa";
	  author="Nilia";
  };


    class EuDef_Insignia_CC: EuDef_Insignia_Logo
    {
        displayName = "EuDef Crasy Consti";
        texture = "\EuDef_Insignia_Player\Player\Bilder\CrasyConsti.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Paul: EuDef_Insignia_Logo
    {
        displayName = "EuDef Paul";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Paul.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Benedikt: EuDef_Insignia_Logo
    {
        displayName = "EuDef Benedikt";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Benedikt.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Frosch: EuDef_Insignia_Logo
    {
        displayName = "EuDef Frosch";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Frosch.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Grurai: EuDef_Insignia_Logo
    {
        displayName = "EuDef Grurai";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Grurai.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Zitobe: EuDef_Insignia_Logo
    {
        displayName = "EuDef Zitobe";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Zitobe.paa";
        author="Nilia";
    };

    class EuDef_Insignia_SamKing_T: EuDef_Insignia_Logo
    {
        displayName = "EuDef Sam King Tropen";
        texture = "\EuDef_Insignia_Player\Player\Bilder\SamKing_T.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Okami: EuDef_Insignia_Logo
    {
        displayName = "EuDef TheOkami";
        texture = "\EuDef_Insignia_Player\Player\Bilder\TheOkami.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Scharfspelz: EuDef_Insignia_Logo
    {
        displayName = "EuDef Scharfspelz";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Scharfspelz.paa";
        author="Nilia";
    };

    class EuDef_Insignia_DieScholle: EuDef_Insignia_Logo
    {
        displayName = "EuDef DieScholle";
        texture = "\EuDef_Insignia_Player\Player\Bilder\DieScholle.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Fichte: EuDef_Insignia_Logo
    {
        displayName = "EuDef Fichte";
        texture = "\EuDef_Insignia_Player\Player\Bilder\DieScholle.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Rodrigez: EuDef_Insignia_Logo
    {
        displayName = "EuDef G. Rodrigez";
        texture = "\EuDef_Insignia_Player\Player\Bilder\GRodrigez.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Jannik: EuDef_Insignia_Logo
    {
        displayName = "EuDef Jannik";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Jannik.paa";
        author="Nilia";
    };



//HIER In der nächsten Zeile einfügen


//Über mir!
};
