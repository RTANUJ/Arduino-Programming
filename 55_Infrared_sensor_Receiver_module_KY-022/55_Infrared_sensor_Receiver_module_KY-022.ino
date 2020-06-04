/*********************************************************** 
File name: 55 – Infrared sensor Receiver module KY-022
Let, Only Receiver modules. ********************/

#include <IRremote.h>
int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()  {
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}
void loop()   {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
}
