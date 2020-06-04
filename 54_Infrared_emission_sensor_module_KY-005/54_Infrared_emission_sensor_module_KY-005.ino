/*********************************************************** 
File name:  54 – Infrared emission sensor module KY-005
Let, Only transmitter modules. ********************/
#include <IRremote.h>
IRsend irsend;
void setup()  {
 Serial.begin(9600);
}
void loop()  {
   for (int i = 0; i < 50; i++) { 
     irsend.sendSony(0xa90, 12); // Sony TV power code
     delay(40);
   }
}
