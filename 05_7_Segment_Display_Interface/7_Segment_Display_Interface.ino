/*********************************************************** 
File name:   05_7 Segment Display Interface .ino Description:  
Let, 7 segment interface. *********************************************************/

int pushButton = 12;
unsigned int buttonState = 0;
int seven_seg_digits[10][7] = { { 1,1,1,1,1,1,0 },  // = 0
                                 { 1,0,1,0,0,0,0 },  // = 1
                                 { 1,1,0,1,1,0,1 },  // = 2
                                 { 1,1,1,1,0,0,1 },  // = 3
                                 { 1,0,1,0,0,1,1 },  // = 4
                                 { 0,1,1,1,0,1,1 },  // = 5
                                 { 0,1,1,1,1,1,1 },  // = 6
                                 { 1,1,1,0,0,0,0 },  // = 7
                                 { 1,1,1,1,1,1,1 },  // = 8
                                 { 1,1,1,0,0,1,1 }   // = 9
                                 };
void setup()        {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop() {
   if (digitalRead(pushButton) == 1)  {
    buttonState = buttonState + 1;
    while (digitalRead(pushButton) == 1)   {
    delay (5);
    }
  }
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability
  sevenSegWrite(buttonState); 
  if (buttonState == 9)      {
    hringur();
    buttonState = 0;
  }
}
  void hringur()   {
  while (buttonState == 9)   {
    Serial.println(buttonState);
    delay(1);        // delay in between reads for stability
    if (digitalRead(pushButton) == 1)   {
    buttonState = buttonState + 1;
    while (digitalRead(pushButton) == 1)   {
    delay (5);
    }
   }
  }
  return;
}
void sevenSegWrite(unsigned int digit) {
  unsigned int pin = 2;
  for (unsigned int segCount = 0; segCount < 8; segCount++) {
    digitalWrite(pin, seven_seg_digits[digit][segCount]);
    pin++;
    digitalWrite(9, 1);
  }
  return;
}
