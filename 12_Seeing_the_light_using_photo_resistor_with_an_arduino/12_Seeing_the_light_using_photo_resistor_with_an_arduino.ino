/*********************************************************** 
File name:  12 Seeing the light using photo resistor with an arduino Description:  
Let, photoresistor using LED blinks. ******************************************/

const int sensorPin = 0;
const int ledPin = 9;
int lightCal;
int lightVal;

void setup()   {
 pinMode(ledPin, OUTPUT);
 lightCal = analogRead(sensorPin);
  }
void loop()     {
  lightVal = analogRead(sensorPin);
  if (lightVal < lightCal - 50)   {
  digitalWrite(9, HIGH);
  }  else    {
    digitalWrite(9, LOW);
  }
}
