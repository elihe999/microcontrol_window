void setup()
{
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop()
{
  digitalWrite(11,LOW); //低电平触发，亮。
  delay(1000);
  digitalWrite(11,HIGH); //高电平，灭。
  delay(1000);
  digitalWrite(12,LOW);
  delay(1000);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  digitalWrite(13,HIGH);
  delay(1000);
}

