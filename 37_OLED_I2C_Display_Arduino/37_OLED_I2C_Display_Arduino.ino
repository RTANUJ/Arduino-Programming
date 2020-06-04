/*********************************************************** 
File name:  37. OLED I2C Display Arduino  .ino Description:  
Let,  OLED I2c display interface with arduino. **********************/
#include <Wire.h>
 void setup()  {
  Wire.begin();
  Serial.begin(9600);
  while (!Serial);             // Leonardo: wait for serial monitor
  Serial.println("\nI2C Scanner");
}
 
void loop()  {
  byte error, address;
  int nDevices;
  Serial.println("Scanning...");
   nDevices = 0;
  for(address = 1; address < 127; address++ )   {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    if (error == 0)  {
      Serial.print("Appareil I2C trouve a cette adresse 0x");
      if (address<16)
        Serial.print("0");
      Serial.print(address,HEX);
      Serial.println("  !");
      nDevices++;
    }
    else if (error==4)  {
      Serial.print("Erreur inconnue a cette address 0x");
      if (address<16)
        Serial.print("0");
      Serial.println(address,HEX);
    }    
  }
  if (nDevices == 0)
    Serial.println("Aucun appareil I2C trouve\n");
  else
    Serial.println("Fin\n");
   delay(5000);           // wait 5 seconds for next scan
}                                                                                                                                                                                 
