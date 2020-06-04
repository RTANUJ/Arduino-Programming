/*********************************************************** 
File name:  49 – Arduino KY-002 Vibration Switch Module
Let, When the switch detects a jolt, the output of the module is sent low. ********************/
int Led = 13 ;// define LED Interface  
int Shock = 3; // define the vibration sensor interface
int val; // define numeric variables val
void setup ()  {
  pinMode (Led, OUTPUT) ; // define LED as output interface
  pinMode (Shock, INPUT) ; // output interface defines vibration sensor
}
void loop ()  {
  val = digitalRead (Shock) ;       // read digital interface is assigned a value of 3 val
  if (val == LOW)                        // When the shock sensor detects a signal, LED flashes
  {
    digitalWrite (Led, HIGH); //Turn LED on
    delay(1000); //Hold LED in on state for one second
  }
  else  {
    digitalWrite (Led, LOW);   //Turn off LED
}
 }
