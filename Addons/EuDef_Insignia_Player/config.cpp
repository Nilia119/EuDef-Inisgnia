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

    class EuDef_Insignia_Akahito: EuDef_Insignia_Logo
    {
        displayName = "EuDef Akahito";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Akahito.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Benedikt: EuDef_Insignia_Logo
    {
        displayName = "EuDef Benedikt";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Benedikt.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Cutter: EuDef_Insignia_Logo
    {
        displayName = "EuDef Cutter";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Cutter.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Dompie: EuDef_Insignia_Logo
    {
        displayName = "EuDef Dompie";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Dompie.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Ernstmosh: EuDef_Insignia_Logo
    {
        displayName = "EuDef Ernstmosh";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Ernstmosh.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Floaty: EuDef_Insignia_Logo
    {
        displayName = "EuDef FloatyBoi";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Floaty.paa";
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

    class EuDef_Insignia_Gurke: EuDef_Insignia_Logo
    {
        displayName = "EuDef Gurke";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Gurke.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Miep: EuDef_Insignia_Logo
    {
        displayName = "EuDef Miep";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Miep.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Olympus: EuDef_Insignia_Logo
    {
        displayName = "EuDef Olympus";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Olympus.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Luna: EuDef_Insignia_Logo
    {
        displayName = "EuDef Luna";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Luna.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Ratte: EuDef_Insignia_Logo
    {
        displayName = "EuDef Ratte";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Ratte.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Rock: EuDef_Insignia_Logo
    {
        displayName = "EuDef Rock";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Rock.paa";
        author="Nilia";
    };

    class EuDef_Insignia_SamKing_T: EuDef_Insignia_Logo
    {
        displayName = "EuDef Sam King Tropen";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Sam King_T.paa";
        author="Nilia";
    };

    class EuDef_Insignia_Sero: EuDef_Insignia_Logo
    {
        displayName = "EuDef Sero";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Sero.paa";
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

    class EuDef_Insignia_Desert: EuDef_Insignia_Logo
    {
        displayName = "EuDef Desert";
        texture = "\EuDef_Insignia_Player\Player\Bilder\Desert.paa";
        author="Nilia";
    };

    class EuDef_Insignia_DieScholle: EuDef_Insignia_Logo
    {
        displayName = "EuDef DieScholle";
        texture = "\EuDef_Insignia_Player\Player\Bilder\DieScholle.paa";
        author="Nilia";
    };

    class EuDef_Insignia_EuDef_Shield: EuDef_Insignia_Logo
    {
        displayName = "European Defence Force";
        texture = "\EuDef_Insignia_Player\Player\Bilder\EuDef_Jinx.paa";
        author="Nilia";
    };


//HIER In der nächsten Zeile einfügen


//Über mir!
};
