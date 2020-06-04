/*********************************************************** 
File name: 72 – Arduino KY-036 Metal touch sensor module
Let, Arduino KY-036 Metal touch sensor module.*******/
int touchPin = A0;
int sensorValue = 0;
 
void setup () 
{
  Serial.begin (9600);
}
 
void loop () 
{
  sensorValue = analogRead (touchPin);
  Serial.println (sensorValue, DEC);
  delay (1000);
}
