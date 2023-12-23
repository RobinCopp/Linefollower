# Gebruiksaanwijzing

### opladen / vervangen batterijen
De twee 18650 li-ion batterijen hebben een speciale oplader nodig. Probeer deze nooit op te laden met een oplader die hier niet voor bedoeld is, dit kan serieuze schade aanrichten.
De batterijhouder wordt op zijn plaats gehouden door enkele elastiekjes. Door deze voorzichtig los te maken kan de batterijhouder van onder de printplaat gehaald worden. Als dit gebeurd is kunnen ze uit de houder gehaald worden en in de oplader gestoken worden. Het is natuurlijk van belang dat de batterijen in de juiste richting in zowel de oplader als in de batterijhouder worden geïnstalleerd. Om de batterijhouder met opgeladen batterijen terug in de auto te installeren moeten de vooraf gaande stappen gewoon in de omgekeerde volgorde uitgevoerd worden.

### draadloze communicatie
#### verbinding maken
Voor draadloze connectie met de auto is een bluethooth module op de auto voorzien. Let op! De bleuthooth module kan niet met Apple apparaten gebruikt worden. Zorg dus dat je een Android toestel ter beschikking hebt. Verder heb je de app "Serial Bluetooth Terminal" nodig om commando's naar de auto te sturen. Verbind eerst via de instellingen van uw apparaat met de bluethoothmodule en selecteer deze vervolgens in de app. Hierna is alles klaar voor het gebruik van draadloze communicatie.

#### commando's
debug [on/off]  = Geeft de ingestelde parameters weer
run  = Starten van de auto (begint te rijden)
stop  = Stoppen van de auto
set cycle [µs]  = Een tijd instellen hoelang de cyclus mag duren. Ongeveer dubbel de calculation time. Deze wordt weergegeven bij debug.
set power [0..255]  = Vermogen instellen van de motoren, zet dit niet zomaar op max, de auto zal enkel wheelies trekken.
set diff [0..1]  = Het snelheids verschil van de auto tussen de rechte stukken en de bochten. Hoe hoger, hoe minder de auto in de bochten vertraagd.
set kp [0..]  = Dit heeft een invloed op hoe "agressief de auto instuurt". Als deze te hoog staat zal de auto heen en weer over de lijn schokken.
set ki [0..]  = Zal meer bijsturen hoelanger de bocht
set kd [0..]  = Corrigeert "kp", hoe groter de fout bij "kp", hoe meer er wordt gecorigeerd.
calibrate black  = moet uitgevoerd worden als de sensor op een zwart oppervlak staat, hierdoor weet de auto wat zwart is en wat hij straks zal moeten volgen.
calibrate white  = moet uitgevoerd worden als de sensor op een wit oppervlak staat, hierdoor weet de auto wat wit is.

### kalibratie
kalibratie moet uitgevoerd worden voor de auto begint te rijden, en moet op het zelfde soort oppervlak gebeuren als de auto straks op zal rijden en moet op de correcte kleur gebeuren, niet op een kleur die er een beetje op trekt.
Eenmaal de auto op de correcte kleur staat, stuur de commando's "calibrate black" en "calibrate white" door naar de auto zoals in de vorige rubriek uitgelegd.

### settings
De robot rijdt stabiel met volgende parameters:
cycle time: 3000
power: 72
diff: 0.74
kp: 20
ki: 0
kd: 0.90

### start/stop button
Na de batterijspanning aan te leggen met de schakelaar die zich vooraan op de batterijhouder bevindt kan op de startknop gedrukt worden om de auto te doen rijden. Deze bevindt zich langs de rechterkant in het midden van de printplaat. Als u erin slaagt om op dezelfde knop te drukken terwijl ed autoaan het rijden is, zal deze knop de auto ook weer doen stoppen.
