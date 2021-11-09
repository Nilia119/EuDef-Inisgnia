class CfgPatches
{
	class 9JgKp_Insiginia
	{
		// Meta information for editor
		name = "Insignien der 9. Jägerkompanie";
		author[] = {"[9.JgKp]Nilia"};
		url = "https://github.com/Nilia119/9JgKp-Inisgnia";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = {"A3_Functions_F"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgUnitInsignia
{
	//Addition of own Bundeswehr Ranks
	class 9JgKp_Jaeger
	{
		displayName="00 Jäger";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_00_Jg.paa";
		textureVehicle="";
	};
	
	class 9JgKp_Gefreiter
	{
		displayName="01 Gefreiter";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_01_Gefr.paa";
		textureVehicle="";
	};
	
	class 9JgKp_Obergefreiter
	{
		displayName="02 Obergefreiter";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_02_OGefr.paa";
		textureVehicle="";
	};
	
	class 9JgKp_Hauptgefreiter
	{
		displayName="03 Hauptgefreiter";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_03_HGefr.paa";
		textureVehicle="";
	};
		
	class 9JgKp_Stabsgefreiter
	{
		displayName="04 Stabsgefreiter";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_04_StGefr.paa";
		textureVehicle="";
	};
		
	class 9JgKp_Oberstabsgefreiter
	{
		displayName="05 Oberstabsgefreiter";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_05_OStGefr.paa";
		textureVehicle="";
	};
		
	class 9JgKp_Korporal
	{
		displayName="06 Korporal";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_06_Korporal.paa";
		textureVehicle="";
	};
		
	class 9JgKp_Stabskorporal
	{
		displayName="07 Stabskorporal";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_07_Stabskorporal.paa";
		textureVehicle="";
	};
		
	class 9JgKp_Unteroffizier
	{
		displayName="08 Unteroffizier";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_08_Uffz.paa";
		textureVehicle="";
	};
		
	class 9JgKp_Stabsunteroffizier
	{
		displayName="09 Stabsunteroffizier";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_09_StUffz.paa";
		textureVehicle="";
	};
		
	class 9JgKp_Feldwebel
	{
		displayName="10 Feldwebel";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_10_Fw.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Oberfeldwebel
	{
		displayName="11 Oberfeldwebel";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_11_OFw.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Hauptfeldwebel
	{
		displayName="12 Hauptfeldwebel";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_12_HFw.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Stabsfeldwebel
	{
		displayName="13 Stabsfeldwebel";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_13_StFw.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Oberstabsfeldwebel
	{
		displayName="14 Oberstabsfeldwebel";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_14_OStFw.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Leutnant
	{
		displayName="15 Leutnant";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_15_Lt.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Oberleutnant
	{
		displayName="16 Oberleutnant";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_16_OLt.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Hauptmann
	{
		displayName="17 Hauptmann";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_17_Hptm.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Stabshauptmann
	{
		displayName="18 Stabshauptmann";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_18_StHptm.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Major
	{
		displayName="19 Major";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_19_Maj.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Oberstleutnant
	{
		displayName="20 Oberstleutnant";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_20_Oberstlt.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Oberst
	{
		displayName="21 Oberst";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_21_Oberst.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Brigadegeneral
	{
		displayName="22 Brigadegeneral";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_22_BrigGen.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Generalmajor
	{
		displayName="23 Generalmajor";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_23_GenMaj.paa";
		textureVehicle="";
	};
			
	class 9JgKp_Generalleutnant
	{
		displayName="24 Generalleutnant";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_24_GenLt.paa";
		textureVehicle="";
	};
				
	class 9JgKp_General
	{
		displayName="25 General";
		author="Nilia";
		texture="\9JgKp_Base\data\insignia\rank_25_Gen.paa";
		textureVehicle="";
	};
};
