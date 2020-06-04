void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(A0, INPUT);
digitalWrite(13, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(A0)==1){
  digitalWrite(13, HIGH);
  digitalWrite(0, HIGH);
  delay(100);
  }
else
{
  digitalWrite(13, LOW);
  digitalWrite(0, HIGH);
  
  }
}
