#define servopin 9


void setup() {
  // put your setup code here, to run once:
  pinMode(servopin, OUTPUT);
}

void servopulse(int angle)
{
  int pulsewidth=(angle*11)+500;
  digitalWrite(servopin, HIGH);
  delayMicroseconds(pulsewidth);
  digitalWrite(servopin, LOW);
  delayMicroseconds(20000-pulsewidth);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 50; i++)
  {
    servopulse(40);
  }
  for(int i = 0; i < 50; i++)
  {
    servopulse(10);
  }
}
