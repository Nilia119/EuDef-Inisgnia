# 9JgKp-Inisgnia
This Repository contains Insignias used by our Clan

Wie füge ich mein Patch hinzu?

--- Die Anleitung zum Editieren der Vorlage bezieht sich auf Adobe Photoshop, ich habe kein alternatives Bildbearbeitungsprogramm, hierfür kann und werde ich auch kein Support geben! Wenn Ihr eine Anleitung hierfür schreiben wollt, könnt Ihr gerne DIESE Datei editieren und die Entsprechende Anleitung unten anfügen.---

1. Das Repository auf Github Forken (https://docs.github.com/en/get-started/quickstart/fork-a-repo)

2. Aus dem Vorlagen Ordner die Vorlage.psd herunterladen

3. Die Vorlage öffnen und bearbeiten:

3.1. Die Ebene "Namensschild" anklicken und aus der Werkzeugleiste das Werkzeug "Horizontales Textwerkzeug" auswählen.

3.2. In der Grafik auf "Nilia" klicken und den entsprechenden Namen eintragen, wenn der Name zu lang ist und sich ausserhalb des Rahmens befinden würde, dann die Schriftart entsprechend verkleinern, aber sie sollte größer als 10px bleiben (Standard 12).

3.3. Die entsprechende Laufbahngruppe z.B. Mannschaften ausklappen und den entsprechenden Rang z.B. Hauptgefreiter einblenden.

3.4. Ggf. die Waffenfarbe anpassen (Nur Aufklärer [Gelb]) sonst immer Minzgrün.

3.5. Das "Viereck" indem sich das Emblem der Jägerkompanie befindet, darf editiert bzw. ersetzt werden (sollte aber nicht größer als das Feld sein).

3.6. Zu letzt, kann unter Hintergründe der entsprechende Hintergrund ausgewählt werden, Fleck oder Tropentarn. (Je nur ein Patch pro Jäger).

4. Das Bild Exportieren als -> PNG, 1156x1156px Transparenz. Bildname sollte sein: NAME-DES-JÄGERS.PNG

5. Das Bild in eine .paa Umwandeln, mittels ARMA 3 TOOLS

5.1. ARMA 3 TOOLS Installieren unter STEAM->Werkzeuge A3 TOOLS

5.2. A3TOOLS öfnnen und dort "texVIEW 2" öffnen.

5.3. In TV2 File->Open->NAME.PNG

5.4. Nach dem öffnen File->Save As ->NAME.paa, nun sollten in dem Ordner die NAME.png und NAME.paa liegen.

6. Die .paa und .png Datei auf Github in das Geforkte Repo hochladen in den Ordner 9JgKp_Insignia_Player\Player\Bilder

7. Das Patch im Spiel hizufügen in der Datei 9JgKp_Insignia_Player\Player\config.cpp

8. Den Beispielabsatz Kopieren von class bis };

9. In der kopierten Klasse: class 9Jgkp_Insignia_NAME das "NAME" durch euren Namen ersetzen, keine Umlaute, bindestriche etc... nur Text A-Z, a-z, 0-9

10. Den Namen des Patches anpassen "ANZEIGENAME DES PATCHES" ändern zu "9. JgKp EUER NAME"

11. Den Pfad zur Textur ändern: aus "\9JgKp_Insignia_Player\Player\Bilder\SPIELERNAME.paa" wird z.B. \9JgKp_Insignia_Player\Player\Bilder\Nilia.paa

12. Speichern und via Github eine Pull-Request öffnen (https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request)

13. Wenn alles passt, wird die .png Datei von mir gelöscht und euere Pull-Request wird gemergede.

14. Das Patch ist ab den nächsten Update verfügbar.
