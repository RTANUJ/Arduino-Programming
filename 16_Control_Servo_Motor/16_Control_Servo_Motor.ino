/*********************************************************** 
File name:   16   Control Servo Motor  .ino Description:  
Let, servo motor rotate **********************************************************/

# include <Servo.h>
Servo myservo;
int pos = 0;
void setup()  {
myservo.attach(6);  
}
void loop()   {
  for (pos = 0; pos <= 180; pos += 5) {
  myservo.write(pos);              
  delay(15);                 
}
  for (pos = 180; pos >= 0; pos -= 5) {
  myservo.write(pos);              
  delay(15);                 
}
}
