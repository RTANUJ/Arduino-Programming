/*********************************************************** 
File name:  46 – Arduino UNO-Small passive buzzer module
Let, a lot of interactive work, the most commonly used are displays, sound and light shows.********************/

int buzzer = 8 ;// buzzer signal connected to this pin
void setup ()  {
  pinMode (buzzer, OUTPUT) ;// set the digital IO pin mode, OUTPUT out of Wen
}

void loop ()  {
  unsigned char i, j ;// define variables
  while (1)
  {
    for (i = 0; i <80; i++) // Wen a frequency sound
    {
      digitalWrite (buzzer, HIGH) ;// send voice
      delay (1) ;// Delay 1ms
      digitalWrite (buzzer, LOW) ;// do not send voice
      delay (1) ;// delay ms
    }
    for (i = 0; i <100; i++) // Another frequency sound
    {
      digitalWrite (buzzer, HIGH) ;// send voice
      delay (2) ;// delay 2ms
      digitalWrite (buzzer, LOW) ;// do not send voice
      delay (2) ;// delay 2ms
    }
  }
}
