int myPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(myPin, OUTPUT);
  Serial.println();
  Serial.print("setup: pin #");
  Serial.print (myPin);
  Serial.println (" is in output mode.");
}

void loop() {
  digitalWrite(myPin, HIGH);
  Serial.print("setup: pin #");
  Serial.print (myPin);
  Serial.println (" is HIGH.");
  delay(2000);
  digitalWrite(myPin, LOW);
  Serial.print("setup: pin #");
  Serial.print (myPin);
  Serial.println (" is LOW.");
  delay(500);
}

