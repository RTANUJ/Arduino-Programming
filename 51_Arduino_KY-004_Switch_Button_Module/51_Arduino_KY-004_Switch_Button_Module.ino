/*********************************************************** 
File name:  51 – Arduino KY-004 Switch Button Module
Let, when we push the button, led will be on. ********************/

int Led = 13 ;// define LED Interface
int buttonpin = 3; // define the key switch sensor interface
int val ;// define numeric variables val
void setup ()  {
  pinMode (Led, OUTPUT); // define LED as output interface
  pinMode (buttonpin, INPUT); // define the key switch sensor output interface
}
void loop ()  {
  val = digitalRead (buttonpin); // digital interface will be assigned a value of 3 to read val
    if (val == HIGH)  // When the key switch when the sensor detects a signal, LED flashes
  {
    digitalWrite (Led, HIGH);
  }
  else   {
    digitalWrite (Led, LOW);
  }
}
