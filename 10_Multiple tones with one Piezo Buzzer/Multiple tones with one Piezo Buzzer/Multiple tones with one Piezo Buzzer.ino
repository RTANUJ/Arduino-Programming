/*********************************************************** 
File name:  10 Buzzer Arduino Circuit  .ino Description:  
Let, buzzer Multiple tones. ******************************************/

const int buzzer= 8;
void setup()  {
pinMode (buzzer,OUTPUT);
 }

void loop()   {
tone(buzzer,1000);
delay(1000);
noTone(buzzer);
delay(1000);
}
