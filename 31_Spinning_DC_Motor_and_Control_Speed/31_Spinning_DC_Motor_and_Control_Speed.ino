/*********************************************************** 
File name: 31 Spinning DC Motor and Control Speed .ino Description:  
Let,spinning dc motor and also control speed of the motor. ********************************/

int motorPin = 9;
void setup() {
    pinMode(motorPin, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
  // motorOnThenOff();
  // motorOnThenOffWithSpeed();
  // motorAcceleration();
     serialSpeed();
}
void motorOnThenOff()  {
  int onTime = 3000;  // milliseconds to turn the motor on
  int offTime = 3000; // milliseconds to turn the motor off
  digitalWrite(motorPin, HIGH); // turn the motor on (full speed)
  delay(onTime);                // delay for onTime milliseconds
  digitalWrite(motorPin, LOW);  // turn the motor off
  delay(offTime);               // delay for offTime milliseconds
}
void motorOnThenOffWithSpeed() {
  int Speed1 = 200;  // between 0 (stopped) and 255 (full speed)
  int Time1 = 3000;  // milliseconds for speed 1
  int Speed2 = 50;   // between 0 (stopped) and 255 (full speed)
  int Time2 = 3000;  // milliseconds to turn the motor off
  analogWrite(motorPin, Speed1);  // turns the motor On
  delay(Time1);                   // delay for onTime milliseconds
  analogWrite(motorPin, Speed2);  // turns the motor Off
  delay(Time2);                   // delay for offTime milliseconds
}
void motorAcceleration() {
  int speed;
  int delayTime = 20; // milliseconds between each speed step
    for(speed = 0; speed <= 255; speed++) {
    analogWrite(motorPin,speed);  // set the new speed
    delay(delayTime);             // delay between speed steps
  }
    for(speed = 255; speed >= 0; speed--) {
    analogWrite(motorPin,speed);  // set the new speed
    delay(delayTime);             // delay between speed steps
  }
}
void serialSpeed() {
  int speed;
  Serial.println("Type a speed (0-255) into the box above,");
  Serial.println("then click [send] or press [return]");
  Serial.println();  // Print a blank line
  while(true)  // "true" is always true, so this will loop forever.
  {
   while (Serial.available() > 0) {
     speed = Serial.parseInt();
     speed = constrain(speed, 0, 255);
     Serial.print("Setting speed to ");
     Serial.println(speed);
     analogWrite(motorPin, speed);
    }
  }
}
