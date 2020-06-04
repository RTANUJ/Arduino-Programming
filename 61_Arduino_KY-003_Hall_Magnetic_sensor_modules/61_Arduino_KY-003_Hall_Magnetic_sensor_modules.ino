/*********************************************************** 
File name: 61 – Arduino KY-003 Hall Magnetic sensor modules
Let, Arduino KY-003 Hall Magnetic sensor modules. *******/

int Led = 13 ; // define LED Interface
int SENSOR = 3 ; // define the Hall magnetic sensor interface
int val ; // define numeric variables val
 void setup ()  {
  pinMode (Led, OUTPUT) ;    // define LED as output interface
  pinMode (SENSOR, INPUT) ;  // define the Hall magnetic sensor line as input
}
 void loop ()  {
  val = digitalRead (SENSOR) ; // read sensor line
  if (val == LOW) // when the Hall sensor detects a magnetic field, Arduino LED lights up
  {
    digitalWrite (Led, HIGH);
  }
  {
    digitalWrite (Led, LOW);
  }
}
