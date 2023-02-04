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

  class 9Jgkp_Insignia_Nilia: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Nilia";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\Nilia.paa";
	  author="Nilia";
  };

	class 9Jgkp_Insignia_McNamMon: 9JgKp_Insignia_Logo
	{
	  displayName = "McNamaras-Morons";
	  texture = "\9JgKp_Insignia_Player\Player\Bilder\McNamMon.paa";
	  author="Nilia/Fflluuffyy";
  };

	class 9Jgkp_Insignia_Fox: 9JgKp_Insignia_Logo
	{
	  displayName = "9. JgKp Fox";
	  texture = "\9JgKp_Insignia_Player\Player\Bilder\Fox.paa";
	  author="Nilia";
  };

	class 9Jgkp_Insignia_Juggernaut: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Juggernaut";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\Juggernaut.paa";
	  author="Nilia";
  };

	class 9Jgkp_Insignia_EwL: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp EwL | Jesus";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\EwL.paa";
	  author="Nilia";
  };

	class 9Jgkp_Insignia_Plutokratie: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Plutokratie";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\Plutokratie.paa";
	  author="Nilia";
  };

	class 9Jgkp_Insignia_Stiffler: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Stiffler";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\Stiffler.paa";
	  author="Paul";
  };

	class 9Jgkp_Insignia_Toyo: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Toyo";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\Toyo.paa";
	  author="Nilia";
  };

	class 9Jgkp_Insignia_Farid_Khaleel: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Farid Khaleel";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\Farid_Khaleel.paa";
	  author="Nilia";
  };

	class 9Jgkp_Insignia_Gerstie: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Gerstie";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\Gerstie.paa";
	  author="Paul";
  };

	class 9Jgkp_Insignia_ImTheKessel: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp ImTheKessel";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\ImTheKessel.paa";
	  author="Paul";
  };

 	class 9Jgkp_Insignia_Haasm: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Haasm1";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\Haasm1.paa";
	  author="Nilia";
  };

  class 9Jgkp_Insignia_Hotshrek: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Hotshrek";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\Hotshrek.paa";
	  author="Nilia";
  };

 class 9Jgkp_Insignia_ItzzPat: 9JgKp_Insignia_Logo
    {
      displayName = "9. JgKp Itzz-_-Pat";
      texture = "\9JgKp_Insignia_Player\Player\Bilder\ItzzPat.paa";
	  author="Nilia";
  };


//HIER In der nächsten Zeile einfügen


//Über mir!
};
