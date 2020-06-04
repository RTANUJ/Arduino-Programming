#include <LiquidCrystal.h>
#include <Keypad.h>
const byte ROWS = 4;
const byte COLS = 3;
char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};
byte rowPins[ROWS] = {13, 12, 11, 10};
byte colPins[COLS] = {9,8,7};
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
LiquidCrystal lcd(1,2,0,6,5,4,3);
void setup() {
  //Serial.begin(9600);

  // initialize the ethernet device
 // Ethernet.begin(mac,dnServer, gateway, subnet);
  //print out the IP address
 // 
 // Serial.println(Ethernet.localIP());
  lcd.begin(16, 2);
  lcd.autoscroll();
  //lcd.print(Ethernet.localIP());
  lcd.print("Enter Your Mobile Number :  ");
}
void loop() {
 char customKey = customKeypad.getKey();
  if (customKey) {
    lcd.print(customKey); 
    //Serial.println(customKey); 
    
  }  
}
