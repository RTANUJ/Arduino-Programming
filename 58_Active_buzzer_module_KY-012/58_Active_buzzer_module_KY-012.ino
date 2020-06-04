/*********************************************************** 
File name: 58 – Active buzzer module KY-012
Let, KY-012 Active buzzer module. *******/

int speakerPin = 8;
void setup () {
  pinMode (speakerPin, OUTPUT);
}
void loop () {
  analogWrite (speakerPin, 255);
  delay (50);
  analogWrite (speakerPin, 0);
  delay (10);
}
