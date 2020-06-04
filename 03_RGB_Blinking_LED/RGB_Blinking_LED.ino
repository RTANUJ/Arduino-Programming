/*********************************************************** 
File name:   03_RGB blinkingLed.ino Description:  
Lit LED, let LED blinks. 
***********************************************************/

void setup() {
pinMode (8,OUTPUT);
pinMode (9,OUTPUT);
pinMode (10,OUTPUT);
}

void loop() {
digitalWrite (8,HIGH);
digitalWrite (10,LOW);
delay(1000);
digitalWrite (9,HIGH);
digitalWrite (8,LOW);
delay(1000);
digitalWrite (10,HIGH);
digitalWrite (9,LOW);
delay(1000);
}
