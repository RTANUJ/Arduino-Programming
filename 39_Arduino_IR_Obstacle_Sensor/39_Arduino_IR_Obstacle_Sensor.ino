/*********************************************************** 
File name: 39 Arduino IR Obstacle Sensor.ino Description:  
Let, IR sensor transmitter reflects from that object and is received by the IR sensor receiver.**************/

int LED = 13; // Use the onboard Uno LED
int isObstaclePin = 2;  // This is our input pin
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE
void setup()    {
  pinMode(LED, OUTPUT);
  pinMode(isObstaclePin, INPUT);
  Serial.begin(9600);
  }
void loop() {
  isObstacle = digitalRead(isObstaclePin);
  if (isObstacle == LOW)   {
    Serial.println("OBSTACLE!!, OBSTACLE!!");
    digitalWrite(LED, HIGH);
  }
  else   {
    Serial.println("clear");
    digitalWrite(LED, LOW);
  }
  delay(200);
}
