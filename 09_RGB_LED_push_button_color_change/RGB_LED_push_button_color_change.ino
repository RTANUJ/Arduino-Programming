/*********************************************************** 
File name:   09 RGB LED push button color change.ino Description:  
let,RGB LED blinks using push button.*********************************************/
const int buttonPin = 3;
const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
int counter = 0;
void setup()
{
pinMode(buttonPin, INPUT);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}
void loop()
{
int buttonState;
buttonState = digitalRead(buttonPin);
if (buttonState == LOW) // light the LED
{
counter++;
delay(150);
}
if (counter == 0)
{
digitalWrite(redPin, LOW);
digitalWrite(greenPin, LOW);
digitalWrite(bluePin, LOW);
}
else if (counter == 1)
{
digitalWrite(redPin, HIGH);
digitalWrite(greenPin, LOW);
digitalWrite(bluePin, LOW);
}
else if (counter == 2)
{
digitalWrite(redPin, LOW);
digitalWrite(greenPin, HIGH);
digitalWrite(bluePin, LOW);
}
else if (counter == 3)
{
digitalWrite(redPin, LOW);
digitalWrite(greenPin, LOW);
digitalWrite(bluePin, HIGH);
}
{
counter = 0;
}
}
