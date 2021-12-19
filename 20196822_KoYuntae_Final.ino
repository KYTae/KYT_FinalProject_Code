//20196822 KoYuntae

void setup() {
  Serial.begin(9600);
}
void loop() {
  int light_sensor = analogRead(A0);
  Serial.println(light_sensor);
  delay(100);
}
