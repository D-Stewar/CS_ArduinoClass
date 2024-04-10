const int ledPin = 6;
void setup() {
  // initialize ledPin (pin 6) as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int brightness = 0; brightness < 255; brightness++) {
    analogWrite(ledPin, brightness);
    delay(2);
  }
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness);
    delay(2);
  }
}
