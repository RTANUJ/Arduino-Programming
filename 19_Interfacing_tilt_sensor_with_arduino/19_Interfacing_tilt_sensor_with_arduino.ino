/*********************************************************** 
File name:   19  Interfacing tilt sensor with arduino. ino Description:  
Let, Tilt sensor using buzzer tone the LED will blinks. ****************************/
int inPin = 4;                              //Establishes the number of the input pin (tilting sensor)
int reading;                                //Establishes the current reading from the input pin (tilting sensor)    
int RedLedPin = 13;             //Establishes the number of the Red LED output pin
const int SpeakerPin = 6; // Establishes the number of the Speaker/Buzzer pin

void setup(){
  pinMode (inPin, INPUT);                   //This will set inPin as INPUT
  pinMode (RedLedPin, OUTPUT); //This will set RedLedPin as OUTPUT
}

void loop () {
  reading = digitalRead(inPin);      //This will read the output from the inPin(tilt sensor)
  if (reading == 1) {                               //If the reading is 1 or True it will process the codes under it
    digitalWrite(RedLedPin, HIGH);   // if the tilt sensor is tilted, it will turn the red LED ON
    
    tone(SpeakerPin, 494, 500);      // if the tilt sensor is tilted, turn the Speaker ON
   delay(500);                       //pause for 0.5 seconds
   
  } else {
    digitalWrite(RedLedPin, LOW);    //Turns off LED if no there is no tilt 
 }
  delay(200);   // pause 200 milliseconds between readings
}
