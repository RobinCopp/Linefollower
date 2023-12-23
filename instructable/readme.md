# Instructable

Een instructable is een stappenplan - zonder verdere uitleg - hoe je vertrekkend van de bill of materials en gebruik makend van de technische tekeningen de robot kan nabouwen. Ook de nodige stappen om de microcontroller te compileren en te uploaden staan beschreven.  

### stap 1
bestel alle componenten uit de bill of materials (bekijk eerst welke je misschien al hebt liggen)

### stap 2
Test of alle componenten ook zoals geadverteerd effectief werken. Hiervoor kunnen de proof of concepts gebruikt worden.

### stap 3
Monteer alle componenten op de printplaat. Voor de microcontroller, H-brug, sensor, bluethooth module, batterijspanning en motoraansluitingen zijn pinheaders voorzien zodat deze zeer gemakkelijk aan te sluiten / af te koppelen zijn.

### stap 4
Het chassis moet je 3D printen. De bestanden hiervoor zijn terug te vinden bij de mechanische technische tekeningen.
Verder moeten ook de motorhouders en de wiel adapters geprint worden.

### stap 5
Soldeer kabels aan de connectors van de motoren om deze op de printplaat te kunnen aansluiten. Gebruik hiervoor geen dikke kabels, aangezien deze de neiging hebben de connectors aan de motor te laten afbreken.

### stap 6
Monteer nu de motoren op het chassis. De motorhouders zet je vast met M3 boutjes. De sensor mag nu ook aan de onderkant van de auto gemonteerd worden. Hiervoor zijn 2 gaten voorzien aan de voorkant van de auto om de M3 boutjes in te draaien. Monteer de sensor zodanig dat de effectieve sensoren aan de voorkant van de auto staan. De pinnen om de sensor aan te sluiten komen nu door het hiervoor voorziene gat uit aan de bovenkant van de auto.

### stap 7
Nu kan de batterijhouder met gemonteerde batterijen op de auto gelegd worden. Deze wordt vastgehouden door een elastiekje, wat het mogelijk maakt deze zeer snel te monteren / demonteren.

### stap 8
De gemonteerde printplaat komt bovenop de batterijhouder en wordt vastgehouden door zowel de sensorkabels vanvoor als de motorkabels vanachter. Hierdoor zweeft de printplaat boven de batterijen.

### stap 9
Nu kunnen de "geleende" Lego Technic wielen op de auto gemonteerd worden. Monteer hiervoor eerst de geprinte wieladapters in de wielen zelf, en schuif ze hierna over de motoren. 

### stap 10
Proficiat! De auto is klaar. Nu rest ons enkel nog het programma te uploaden naar de microcontroller. Demonteer hiervoor eerst de bluetooth module van de printplaat en plug de auto dan in een usb poort van uw computer. Het Arduino programma kan je vinden onder code -> finaal. Stel als microcontroller de "Atmel atmega 328p" in, en upload het programma. Als dit gelukt is mag de bluetooth module terug gemonteerd worden.

### stap 11
De auto staat nu volledig klaar voor gebruik en moet enkel nog ingesteld worden. Zet de auto op het parcours en maak er verbinding mee via bluetooth.
Hoe dit moet en hoe de parameters moeten ingesteld worden is weer te vinden in de gebruiksaanwijzing.

### stap 12
Als al deze stappen gelukt zijn zou dit het resultaat moeten zijn dat je hebt bekomen:


![image](https://github.com/RobinCopp/Linefollower/assets/146443186/aa66fd7e-556c-4681-abdd-a1bd200b8ed7)
![image](https://github.com/RobinCopp/Linefollower/assets/146443186/7f4df11d-eb5b-42ea-9b8e-d064ceab074e)
![image](https://github.com/RobinCopp/Linefollower/assets/146443186/85bd439f-194e-4024-a83f-ae919ccdb458)
![image](https://github.com/RobinCopp/Linefollower/assets/146443186/3184b67d-9168-4b49-903d-8adbc1012405)








