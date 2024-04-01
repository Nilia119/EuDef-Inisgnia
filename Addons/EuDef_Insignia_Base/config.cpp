class CfgPatches
{
	class EuDef_Insignia_Base
	{
		// Meta information for editor
		name = "Insignien der European Defence Force";
		author = "[EuDef]Nilia";
		url = "https://github.com/Nilia119/EuDef-Inisgnia";

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
	class EuDef_Insignia_Soldat
	{
		displayName="000 Soldat";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_00_Jg.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Gefreiter
	{
		displayName="001 Gefreiter";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_01_Gefr.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Obergefreiter
	{
		displayName="002 Obergefreiter";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_02_OGefr.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Hauptgefreiter
	{
		displayName="003 Hauptgefreiter";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_03_HGefr.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Stabsgefreiter
	{
		displayName="004 Stabsgefreiter";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_04_StGefr.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Oberstabsgefreiter
	{
		displayName="005 Oberstabsgefreiter";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_05_OStGefr.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Korporal
	{
		displayName="006 Korporal";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_06_Korp.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Stabskorporal
	{
		displayName="007 Stabskorporal";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_07_StKorp.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Unteroffizier
	{
		displayName="008 Unteroffizier";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_08_Uffz.paa";
		textureVehicle="";
	};
	
	class EuDef_Insignia_Fahnenjunker
	{
		displayName="0081 Fahnenjunker";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_08a_Fhj.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Stabsunteroffizier
	{
		displayName="009 Stabsunteroffizier";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_09_StUffz.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Feldwebel
	{
		displayName="010 Feldwebel";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_10_Fw.paa";
		textureVehicle="";
	};
	
	class EuDef_Insignia_Faehnrich
	{
		displayName="0101 Faehnrich";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_10a_Faehnr.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Oberfeldwebel
	{
		displayName="011 Oberfeldwebel";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_11_OFw.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Hauptfeldwebel
	{
		displayName="012 Hauptfeldwebel";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_12_HFw.paa";
		textureVehicle="";
	};
	
	class EuDef_Insignia_Oberfaehnrich
	{
		displayName="0121 Oberfaehnrich";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_12a_OFaehnr.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Stabsfeldwebel
	{
		displayName="013 Stabsfeldwebel";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_13_StFw.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Oberstabsfeldwebel
	{
		displayName="014 Oberstabsfeldwebel";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_14_OStFw.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Leutnant
	{
		displayName="015 Leutnant";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_15_Lt.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Oberleutnant
	{
		displayName="016 Oberleutnant";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_16_OLt.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Hauptmann
	{
		displayName="017 Hauptmann";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_17_Hptm.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Stabshauptmann
	{
		displayName="018 Stabshauptmann";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_18_StHptm.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Major
	{
		displayName="019 Major";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_19_Maj.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Oberstleutnant
	{
		displayName="020 Oberstleutnant";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_20_Oberstlt.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Oberst
	{
		displayName="021 Oberst";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_21_Oberst.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Brigadegeneral
	{
		displayName="022 Brigadegeneral";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_22_BrigGen.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Generalmajor
	{
		displayName="023 Generalmajor";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_23_GenMaj.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_Generalleutnant
	{
		displayName="024 Generalleutnant";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_24_GenLt.paa";
		textureVehicle="";
	};

	class EuDef_Insignia_General
	{
		displayName="025 General";
		author="Nilia";
		texture="\EuDef_Insignia_Base\data\insignia\Rank_25_Gen.paa";
		textureVehicle="";
	};
    class EuDef_Insignia_Logo_T
    {
        displayName="European Defence Force Logo";
        author="Nilia";
        texture="\EuDef_Insignia_Base\data\insignia\EuDef.paa";
        textureVehicle="";
    };
    class EuDef_Insignia_Logo
    {
        displayName="European Defence Force Hexa";
        author="Nilia";
        texture="\EuDef_Insignia_Base\data\insignia\EuDef Hexa.paa";
        textureVehicle="";
    };
};
