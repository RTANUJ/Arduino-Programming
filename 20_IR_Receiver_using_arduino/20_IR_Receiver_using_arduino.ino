/*********************************************************** 
File name:   20- IR_Receiver using arduino .ino Description:  
Let,IR Remote is a great way to have wireless control ********************************/
#include <IRremote.h>      // Include the lib
int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}
void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
