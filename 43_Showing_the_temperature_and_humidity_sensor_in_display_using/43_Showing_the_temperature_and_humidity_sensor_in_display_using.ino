/*********************************************************** 
File name:   43  Showing the temperature and humidity sensor in display using arduino.ino Description:  
Let, Showing the temperature using DHT. ****************************/
#include <SimpleDHT.h>
int pinDHT11 = 7;
SimpleDHT11 dht11;

void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println("=================================");
  Serial.println("Sample DHT11...");
  
  byte temperature = 0;
  byte humidity = 0;
  byte data[40] = {0};
  if (dht11.read(pinDHT11, &temperature, &humidity, data)) {
    Serial.print("Read DHT11 failed");
    return;
  }
    Serial.print("Sample RAW Bits: ");
  for (int i = 0; i < 40; i++) {
    Serial.print((int)data[i]);
    if (i > 0 && ((i + 1) % 4) == 0) {
      Serial.print(' ');
    }
  }
  Serial.println("");
  Serial.print ("Sample OK: ");
  Serial.print((int)temperature); Serial.print(" *C, ");
  Serial.print((int)humidity); Serial.println(" %");
 delay(1000);
}
