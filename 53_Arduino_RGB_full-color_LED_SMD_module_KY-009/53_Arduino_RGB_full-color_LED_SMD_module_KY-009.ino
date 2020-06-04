/*********************************************************** 
File name:  53 – Arduino RGB full-color LED SMD module KY-009
Let, It shows different color of RGB light will be blinking with using resistor ********************/
int redpin = 11; // select the pin for the red LED
int bluepin = 10; // select the pin for the blue LED
int greenpin = 9; // select the pin for the green LED
int val=0;
void setup ()  {
  pinMode (redpin, OUTPUT);
  pinMode (bluepin, OUTPUT);
  pinMode (greenpin, OUTPUT);
  Serial.begin (9600);
}
 void loop ()  {
  for (val=255; val>0; val--)   {
    analogWrite (redpin, val);
    analogWrite (bluepin, 255-val);
    analogWrite (greenpin, 128-val);
    delay (1);
  }
  for (val = 0; val <255; val++)  {
    analogWrite (redpin, val);
    analogWrite (bluepin, 255-val);
    analogWrite (greenpin, 128-val);
    delay (1);
  }
  Serial.println (val, DEC);
}
