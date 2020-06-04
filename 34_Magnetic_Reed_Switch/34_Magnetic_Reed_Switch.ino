/*********************************************************** 
File name:  34  Magnetic Reed Switch. ino Description:  
Let, Demonstrates how to use a magnetic reed switch. ****************************/
#define LED   13
#define REED  2
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(REED, INPUT);
}
void loop() {
  digitalWrite(LED, digitalRead(REED));
}
