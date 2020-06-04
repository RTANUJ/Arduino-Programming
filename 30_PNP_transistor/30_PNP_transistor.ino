/*********************************************************** 
File name:   30. PNP transistor .ino Description:  
Let, LED blinks using PNP transistor. ********************************/
  void setup()  {                
  pinMode(13, OUTPUT);    
}
  void loop() {
  digitalWrite(13, HIGH); // Turn on LED
  delay(5000);
  digitalWrite(13, LOW); // Turn off LED
  delay(5000);      
}
