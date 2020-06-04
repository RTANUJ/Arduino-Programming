/*********************************************************** 
File name: 75 – Automatic flashing colorful LED module KY-034
Let, Arduino 7 color flash LED module.*******/
int Led = 13;
 
void setup () {
  pinMode (Led, OUTPUT); // Initialization of the LED output pin
}
void loop () {
  digitalWrite (Led, HIGH); // LED will be switched on
  delay (4000); // waitmode for 4 seconds
  digitalWrite (Led, LOW); // LED will be switched off
  delay (2000); // waitmode for another 2 seconds
}
