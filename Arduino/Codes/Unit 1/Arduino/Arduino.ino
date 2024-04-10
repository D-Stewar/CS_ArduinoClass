void setup() {
  // Initialize a serial communication session with laptop.
  //Specify the modulation rate as 9600 baud.
  Serial.begin(9600);
  //Let the user know the pin is in output mode.
  Serial.println("setup: LED_BUILTIN was set to output mode.");
  Serial.println("Done with setup().");
  //pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //digitalWrite(LED_BUILTIN, HIGH);
  // let user know LED is on.
  //Serial.println("LED should be on.");

 // delay(1000);

  //digitalWrite(LED_BUILTIN, LOW);  
  // let user know LED is off.
 // Serial.println("LED should be OFF.");
  
  //delay(1000);
}