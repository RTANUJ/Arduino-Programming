/*********************************************************** 
File name:   04_ Controlling an LED by a Button.ino Description:  
Lit LED, let LED blinks. 
***********************************************************/

int ledpin=13;// definition digital interface
int inpin=5;//Define the number 7 Interface
int val;//Define the variable val
void setup()
{
  pinMode(ledpin,OUTPUT);//Define led as Output
  pinMode(inpin,INPUT);//Button interface is defined as input
}
void loop()
{
val=digitalRead(inpin);//Read digitalpin 7 level value assigned to val
if(val==HIGH)//Test button is pressed 
{
  digitalWrite(ledpin,LOW);
}
else
{ 
  digitalWrite(ledpin,HIGH);
}
}
