/*********************************************************** 
File name: 67 – Arduino KY-025 Reed module
Let, Arduino  KY-025 Reed Switch Module.*******/

int led = 13; // define the LED pin
int digitalPin = 2; // KY-025 digital interface
int analogPin = A0; // KY-025 analog interface
int digitalVal; // digital readings
int analogVal; //analog readings
void setup()  {
  pinMode(led, OUTPUT);
  pinMode(digitalPin, INPUT);
  //pinMode(analogPin, OUTPUT);
  Serial.begin(9600);
}
void loop()  {
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  if(digitalVal == HIGH) // if magnetic field is detected
  {
    digitalWrite(led, HIGH); // turn ON Arduino's LED
  }
  else  {
  digitalWrite(led, LOW); // turn OFF Arduino's LED
  }
  // Read the analog interface
  analogVal = analogRead(analogPin); 
  Serial.println(analogVal); // print analog value to serial
  delay(100);
} 
