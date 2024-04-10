void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(6, 256, 5000);
  delay(500);
  tone(6, 294, 5000);
  delay(500);
  tone(6, 330, 5000);
  delay(500);
}
