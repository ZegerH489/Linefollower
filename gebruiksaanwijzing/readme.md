# Gebruiksaanwijzing

### opladen / vervangen batterijen
De lithium batterijen kunnen eenvoudig vervangen worden vanuit de batterijhouder aan de achterkant van de wagen. De batterijen kunnen ook opgeladen worden, in mijn geval doe ik dit met een Liitokala Lii-L2. Zorg er zeker voor dat wanneer je voor een snelheidsrecord gaat de batterijen volledig zijn opgeladen aangezien er geen spanningsregelaar aanwezig is tussen de batterijen en de motor, dus zal de snelheid lager liggen wanneer de batterijen niet vol geladen zijn.

### draadloze communicatie
#### verbinding maken
Voor draadloze communicatie tussen uw GSM en de linefollower zal er eerst verbinding gemaakt moeten worden met de HC-05 over bluetooth (zoals je zou doen met je koptelefoon), log in met het wachtwoord 1234. Bij een tweede keer verbinding maken via bluetooth zal je de HC-05 eerst moeten vergeten. Wanneer de verbinding via Bluetooth van stand is kan je de app "Serial Bluetooth Terminal" openen en daar het device HC-05 uitkiezen (dit zal het enigste apparaat zijn met een groen streepje naast). Wanneer de verbinding compleet is zal je een bericht binnenkrijgen op de terminal "ready".

#### commando's
debug ( voor het controleren van waarden en parameters) 
set run (voor het starten van de wagen)
set stop  (voor het stoppen van de wagen)
set cycle [µs]  (voor het instellen van de cyclus tijd, best dubbel van de calculation time)
set power [0..255]  (voor het regelen van de snelheid met 255 gelijk aan de maximum snelheid)
set diff [0..1]  (voor de snelheid in bochten te bepalen)
set kp [0..]  (voor aan te geven hoe snel de linefollower moet reageren op aanpassingen in de koers)
set ki [0..] (voor integrerend te regelen, naar hoelang de fout zich voordoet) 
set kd [0..]  (voor differentiërend te regelen, naar hoe snel de fout wordt opgelost)
calibrate black  (voor het instellen van de sensorwaarden boven een zwart oppervlak)
calibrate white  (voor het instellen van de sensorwaarden boven een wit oppervlak)

### kalibratie
Plaats de wagen de linefollower boven een wit oppervlak en geef het commando "calibrate white", plaats hierna de linefollower boven een zwart oppervlak gevolgt door het commando "calibrate black".
Nu kan je de calibratie controleren door de wagen op de lijn te plaatsen en het commando "debug" te gebruiken, in de regel "normalisatie" zal je de waarden van de sensoren in vergelijking met de kalibraties zien daar is het duidelijk zichtbaar onder welke sensoren de lijn ligt door middel van de lage waardes hier.

### settings
De robot rijdt stabiel met volgende parameters: 
kp = 25 
power = 120
diff = 0.50
cycle time = 2000

### start/stop button
Op het breadbord (aan de voorkant van de linefollower) tussen de HC-05 en de H-brug bevindt zich een start/stop knop waarmee de linefollower aan en uit gezet kan worden indien er verbindings problemen zijn met de HC-05. 
Want anders is het eenvoudiger de wagen te starten en te stoppen door middel van de commando's "set run" (om te starten) en "set stop" (om te stoppen).
