# Insignia of the European Defence Force
This Repository contains Insignias used by our Clan

Wie f�ge ich mein Patch hinzu?

--- Die Anleitung zum Editieren der Vorlage bezieht sich auf Adobe Photoshop, ich habe kein alternatives Bildbearbeitungsprogramm, hierf�r kann und werde ich auch keinen Support geben! Wenn Ihr eine Anleitung hierf�r schreiben wollt, k�nnt Ihr gerne DIESE Datei editieren und die entsprechende Anleitung unten anf�gen.---

1. Das Repository auf Github Forken (https://docs.github.com/en/get-started/quickstart/fork-a-repo)

2. Aus dem Vorlagenordner die Vorlage.psd herunterladen

3. Die Vorlage �ffnen und bearbeiten:

3.1. Die Ebene "Namensschild" anklicken und aus der Werkzeugleiste das Werkzeug "Horizontales Textwerkzeug" ausw�hlen.

3.2. In der Grafik auf "Nilia" klicken und den entsprechenden Namen eintragen, wenn der Name zu lang ist und sich au�erhalb des Rahmens befinden w�rde, dann die Schriftart entsprechend verkleinern, aber sie sollte gr��er als 10px bleiben (Standard 12).

3.3. Die entsprechende Laufbahngruppe z.B. Mannschaften ausklappen und den entsprechenden Rang z.B. Hauptgefreiter einblenden.

3.4. Ggf. die Waffenfarbe anpassen (Nur Aufkl�rer [Gelb]) sonst immer Euroblau (#003399).

3.5. Das "Viereck" indem sich das Emblem der EuDef befindet, darf editiert bzw. ersetzt werden (sollte aber nicht gr��er als das Feld sein).

3.6. Zuletzt kann unter Hintergr�nden der entsprechende Hintergrund ausgew�hlt werden, Fleck oder Tropentarn. (Je nur ein Patch pro Spieler).

4. Das Bild exportieren als -> PNG, 1024x1024px Transparenz. Bildname sollte sein: NAME_DES_Spielers.PNG (Ohne Verwendung von Sonderzeichen: �, �, �, �, #)

5. Das Bild in eine .paa umwandeln, mittels ARMA 3 TOOLS

5.1. ARMA 3 TOOLS Installieren unter STEAM->Werkzeuge A3 TOOLS

5.2. A3TOOLS �ffnen und dort "textVIEW 2" �ffnen.

5.3. In TV2 File->Open->NAME.PNG

5.4. Darauf achten, dass in TV2 <b>RGBA und DXT5</b> ausgew�hlt ist. Sollte dies nicht der Fall sein, kann in dem Feld rechts daneben (wo <i>none</i>) drinsteht <b>RGBA DXT5</b> ausgew�hlt werden.

5.6. Dann einfach File->Save As ->NAME.paa, nun sollten in dem Ordner die NAME.png und NAME.paa liegen (mit gleichem Namen).

6. Die .paa und .png Datei auf Github in das Geforkte Repo hochladen in den Ordner EuDef_Insignia_Player\Player\Bilder

7. Das Patch im Spiel hinzuf�gen in der Datei EuDef_Insignia_Player\Player\config.cpp

8. Den Beispielabsatz Kopieren von class bis };

9. In der kopierten Klasse: class EuDef_Insignia_NAME das "NAME" durch euren Namen ersetzen, keine Umlaute, Bindestriche etc... nur Text A-Z, a-z, 0-9

10. Den Namen des Patches anpassen "ANZEIGENAME DES PATCHES" �ndern zu "EuDef EUER NAME"

11. Den Pfad zur Textur �ndern: aus "\EuDef_Insignia_Player\Player\Bilder\SPIELERNAME.paa" wird z.B. \EuDef_Insignia_Player\Player\Bilder\Nilia.paa

12. Speichern und via Github eine Pull-Request �ffnen (https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request)

13. Wenn alles passt, wird die .png Datei von mir gel�scht und euere Pull-Request wird gemerged.

14. Das Patch ist ab dem n�chsten Update verf�gbar.