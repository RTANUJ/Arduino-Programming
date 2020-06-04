/*********************************************************** 
File name:   17  stepper Motor Control  .ino Description:  
Let, Control stepper motor. *********************************************/
#include <Stepper.h>
#define STEPS 64
Stepper stepper(STEPS, 8, 9, 10, 11);
int previous = 0;
void setup()  {
 stepper.setSpeed(30);
}

void loop()   {
  int val = analogRead(0); 
  stepper.step(val - previous);
  previous = val;
}
