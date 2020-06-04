
/*********************************************************** 
File name:   13  LCD1602 Display arduino.ino Description:  
Let, LCD display print HELLO WORLD. ******************************************/
#include <LiquidCrystal.h>
LiquidCrystal lcd(8,3,9,7,6,5,4);
int ledPin = 13;
void setup() {
  pinMode(ledPin,OUTPUT); 
  lcd.begin(16, 2);
  lcd.print("TANUJ");  
}
void loop() {
  }
