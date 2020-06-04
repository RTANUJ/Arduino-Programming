/*********************************************************** 
File name:  47 – Arduino KY-011 2-color LED module 
Let, You can adjust the amount of each color using PWM.********************/
int redpin = 11; // select the pin for the red LED
int greenpin = 10; // select the pin for the green LED
int val;
void setup () {
   pinMode (redpin, OUTPUT);
   pinMode (greenpin, OUTPUT);
}
void loop () {
   for (val = 255; val > 0; val--)
      {
      analogWrite (greenpin, val);
      analogWrite (redpin, 255-val);
      delay (15);
   }
   for (val = 0; val < 255; val++)
      {
      analogWrite (greenpin, val);
      analogWrite (redpin, 255-val);
      delay (15);
   }  
}
