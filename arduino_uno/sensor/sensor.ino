int PIN_SENSOR = 13;
 
void setup() {
  pinMode(PIN_SENSOR, INPUT);
  Serial.begin(9600);
}
 
void loop() {
  int x = digitalRead(PIN_SENSOR);
  Serial.println(x);
}
