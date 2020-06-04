/*********************************************************** 
File name: 24 - Keypad Module.ino Description:  
Let, keypad  *****************************************************/
#include <Keypad.h>
const byte ROWS = 4;     //four rows
const byte COLS = 4;      //four columns
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the Rows of the keypad pin 8, 7, 6, 5 respectively
byte colPins[COLS] = {5, 4, 3, 2}; //connect to the Columns of the keypad pin 4, 3, 2, 1 respectively
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
void setup()   {
  Serial.begin(9600);
}
void loop(){
  char customKey = customKeypad.getKey();
    if (customKey){
    Serial.println(customKey); // Send the pressed key value to the arduino serial monitor
  }
}
