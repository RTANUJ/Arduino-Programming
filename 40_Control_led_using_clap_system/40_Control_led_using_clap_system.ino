/*********************************************************** 
File name: 40 - Control led using clap system. No Description:  
Let, control led using  clap****************************************/
int soundSensor =3;
int LED = 4 ;
boolean LEDStatus = false;
void setup() {
pinMode(soundSensor,INPUT);
pinMode(LED,OUTPUT);
}
void loop() {
int SensorData=digitalRead(soundSensor);
if(SensorData==1){
if (LEDStatus==false){
LEDStatus=true;
digitalWrite(LED,HIGH);
}
 else  {
LEDStatus=false;
digitalWrite(LED,LOW);
}
}
}
