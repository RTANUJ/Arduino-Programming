/*********************************************************** 
File name: 64 – Arduino KY-040 Rotary encoder module
Let, Arduino KY-040 Rotary encoder module. *******/

enum { PinA=2, PinB=3, IPINMODE=INPUT };
static  byte abOld;     // Initialize state
volatile int count;     // current rotary count
         int old_count;     // old rotary count
 
void setup() {
  pinMode(PinA, IPINMODE);
  pinMode(PinB, IPINMODE);
  attachInterrupt(0, pinChangeISR, CHANGE); // Set up pin-change interrupts
  attachInterrupt(1, pinChangeISR, CHANGE);
  abOld = count = old_count = 0;
  Serial.begin(9600);
  Serial.println("Starting Rotary Encoder Test");
}
 // On interrupt, read input pins, compute new state, and adjust count
void pinChangeISR() {
  enum { upMask = 0x66, downMask = 0x99 };
  byte abNew = (digitalRead(PinA) << 1) | digitalRead(PinB);
  byte criterion = abNew^abOld;
  if (criterion==1 || criterion==2) {
    if (upMask & (1 << (2*abOld + abNew/2)))
      count--;
    else count++;       // upMask = ~downMask
  }
  abOld = abNew;        // Save new state
}
void loop() {
  if (old_count != count) {
    Serial.println(count);
    old_count = count;
  }
}
