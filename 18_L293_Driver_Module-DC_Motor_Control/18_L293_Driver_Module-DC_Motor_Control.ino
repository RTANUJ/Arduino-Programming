/*********************************************************** 
File name:   18  L293 Driver Module-DC Motor Control  .ino Description:  
Let, L293 Driver Module Control DC motor. ****************************/
int enableA = 3;
int MotorA1 = 11;
int MotorA2 = 10;
void setup() {
  Serial.begin (9600);
  //configure pin modes
  pinMode (enableA, OUTPUT);
  pinMode (MotorA1, OUTPUT);
  pinMode (MotorA2, OUTPUT);  
 }
 void loop() {
  //enabling motor A
  Serial.println ("Enabling Motors");
  digitalWrite (enableA, HIGH);
   delay (1000);
  //do something
  Serial.println ("Motion Forward");
  digitalWrite (MotorA1, LOW);
  digitalWrite (MotorA2, HIGH);
   //3s forward
  delay (3000);
  Serial.println ("Motion Backwards");
  //reverse
  digitalWrite (MotorA1,HIGH);
  digitalWrite (MotorA2,LOW);  
    //5s backwards
  delay (3000);
   Serial.println ("Stoping motors");
  //stop
  digitalWrite (enableA, LOW);
  delay (3000);
}
