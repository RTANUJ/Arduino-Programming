/*********************************************************** 
File name:   02_Four blinkingLed.ino Description:  
Lit LED, let LED blinks. 
***********************************************************/ 

int led1 = 2;// LED connected to digital pin 2
int led2 = 3;// LED connected to digital pin 3
int led3 = 4;// LED connected to digital pin 4
int led4 = 5;// LED connected to digital pin 5


// the setup routing runs once when you press reset:
void setup() {

  // initialize the digital pin as on output..
     pinMode(led1,OUTPUT);
     pinMode(led2,OUTPUT);
     pinMode(led3,OUTPUT);
     pinMode(led4,OUTPUT);
 }

// the loop routing runs over and over again forever:

void loop() {

  digitalWrite(led1,HIGH);// turn the LED on (HIGH is the voltage level)
  delay(50);           // wait for a second      
  digitalWrite(led1,LOW); // turn the LED off by making the voltage LOW
  digitalWrite(led2,HIGH);// turn the LED on (HIGH is the voltage level
  delay(50);// wait for a second
  digitalWrite(led2,LOW);// turn the LED off by making the voltage LOW
  digitalWrite(led3,HIGH);// turn the LED on (HIGH is the voltage level
  delay(50);// wait for a second
  digitalWrite(led3,LOW);// turn the LED off by making the voltage LOW
  digitalWrite(led4,HIGH);// turn the LED on (HIGH is the voltage level
  delay(50);// wait for a second
  digitalWrite(led4,LOW);// turn the LED off by making the voltage LOW
  delay(200);// wait for a second

}
