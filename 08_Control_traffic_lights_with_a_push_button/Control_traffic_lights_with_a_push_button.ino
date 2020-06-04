/*********************************************************** 
File name:   08_Control traffic lights with a push button.ino Description:  
Lit LED, let LED blinks. 
***********************************************************/
int mainRoadRed = 3;  
int mainRoadYellow = 4;
int mainRoadGreen = 5;
int crossRed = 8;  
int crossGreen = 9;
int button = 12; 
int crossTime = 4000;   
unsigned long buttonGap ; // collects the time since the button was last pressed

void setup () {
  pinMode(mainRoadRed, OUTPUT);
  pinMode(mainRoadYellow, OUTPUT);
  pinMode(mainRoadGreen, OUTPUT);
  pinMode(crossRed, OUTPUT);
  pinMode(crossGreen, OUTPUT);
  pinMode(button, INPUT);
 
  digitalWrite(mainRoadGreen,HIGH); //start with green car light on
  digitalWrite(crossRed, HIGH); //start with red ped light on
}

void loop(){
  // check if button is pressed
  int state = digitalRead(button);
  
   // check if it is over 5 sec since last button press
  if(state==HIGH && (millis() - buttonGap) > 5000) {
    switchLights();   
  }
}

void switchLights() {
  digitalWrite(mainRoadGreen,LOW);  //turn off green light in main road
  digitalWrite(mainRoadYellow,HIGH); // turn on yellow light in main road
  delay(2000); //wait 2 seconds

  digitalWrite(mainRoadYellow,LOW); // turn off yellow light in main road
  digitalWrite(mainRoadRed,HIGH); //turn on red light in main road
  delay(1000); //wait 1s before turning on cross pedestrian green light

  digitalWrite(crossRed,LOW); //turn off red  pedestrian light
  digitalWrite(crossGreen,HIGH); //turn on green  pedestrian light
  delay(crossTime); //delay preset time of 4 seconds
  //flashing of green cross pedestrian light
  for (int x=0; x<10; x++){
    digitalWrite(crossGreen,HIGH);
    delay(250);
    digitalWrite(crossGreen,LOW);
    delay(250);
  }
 
  digitalWrite(crossRed, HIGH); //turn on red  pedestrian light
  delay(100);
 
  digitalWrite(mainRoadGreen,HIGH); //turn on green light in main road
  digitalWrite(mainRoadRed,LOW); //turn off red light in main road
 
  buttonGap = millis(); //remember time since recent light switch
 
}
