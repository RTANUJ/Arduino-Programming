/*********************************************************** 
File name: 57  Yin Yi 2-color LED module 3MM KY-029
Let, KY-029 2 color LED module. *******/

int redpin = 12; // select the pin for the red LED
int bluepin = 11; // select the pin for the blueLED
int val;
 void setup () {
  pinMode (redpin, OUTPUT);
  pinMode (bluepin, OUTPUT);
  Serial.begin (9600);
}
 void loop () {
 for(val=255;val>0;val--) {
   analogWrite (12, val);
   analogWrite (11, 255 - val);
   delay(5);
 }
 for(val=255;val<255;val++) {
    analogWrite (12, val);
    analogWrite (11, 255 - val);
   delay(5);
 }
}
