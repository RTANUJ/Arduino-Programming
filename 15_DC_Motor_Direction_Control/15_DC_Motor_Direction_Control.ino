/*********************************************************** 
File name:   15  DC Motor Direction Control.ino Description:  
Let, DC motor control by RGB LED. ****************************************/
const int inputPin=1;
const int blue=3;
const int red=4;
const int motorPin1=5, motorPin2=6;
int dir = LOW;
int prevState=0, currentState=0;

void setup()   {
pinMode(inputPin, INPUT);
pinMode(motorPin1, OUTPUT);
pinMode(motorPin2, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(red, OUTPUT);
}
void loop ()   {
currentState=digitalRead(inputPin);
if (currentState!= prevState)
 {
  if (currentState == HIGH)
   {
     dir = !dir;
   }
 }
 prevState = currentState;
  if (dir==HIGH)
 {
  digitalWrite(motorPin1,HIGH);
  digitalWrite(motorPin2,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(red,LOW);
 }
  else      {
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(red,HIGH);
 }
 }
