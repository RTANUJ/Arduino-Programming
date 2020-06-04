/*********************************************************** 
File name:  41 . Laser Module 650NM .ino Description:  
Let, Laser module interface with arduino. **********************/
int laserPin = 13;
void setup() {              pinMode(laserPin, OUTPUT);  // Define the digital output interface pin 13 
}
void loop() {
  digitalWrite(laserPin, HIGH); // Open the laser head
  delay(1000); // Delay one second
  digitalWrite(laserPin, LOW); // Close the laser head
  delay(1000); 
}                                                                               
