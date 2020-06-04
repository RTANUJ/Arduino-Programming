/*********************************************************** 
File name:  38 Interfacing of MQ-135 Gas Sensor with Arduino .ino Description:  
Let, MQ-135 gas sensor . **********************/

#define MQ_analog A0
int valor_analog;
 
void setup()   {
   Serial.begin(9600);
   pinMode(MQ_analog, INPUT);
 }
 void loop() {
   valor_analog = analogRead(MQ_analog); 
  
   Serial.print(valor_analog);
   Serial.print(" || ");
   Serial.println("GAS DETECTADO !!!");
   Serial.println("GAS AUSENTE !!!");
   delay(500);
 }                                                                                                                                                                   
