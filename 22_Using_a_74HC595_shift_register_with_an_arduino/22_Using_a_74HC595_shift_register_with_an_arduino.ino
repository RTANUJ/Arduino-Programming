/*********************************************************** 
File name:   22 using a 74HC595 shift register with an arduino  .ino Description:  
Let, IC 74HC595 BLINK LED. *****************************************************/
#include <ShiftRegister74HC595.h>
int data = 10;  // 74HC595 data input pin 14 
int clock = 11; // 74hc595 clock (SCK) line pin 11 
int latch = 12;   //  74hc595latch line pin 12
int ledState = 0;
const int ON = HIGH;
const int OFF = LOW;
void setup ()  {
pinMode (data, OUTPUT);
pinMode (clock, OUTPUT);
pinMode (latch, OUTPUT);
}
void loop ()  {
for (int i = 0; i <256; i ++)  {
updateLEDs (i);
delay (500);
}
}
void updateLEDs (int value)  {
digitalWrite (latch, LOW); 
shiftOut (data, clock, MSBFIRST, ~ value); // serial data output
digitalWrite (latch, HIGH); // latch
}
