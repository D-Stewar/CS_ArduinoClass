void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  char charName[]="Daphne";
  int charAge = 15;

  Serial.print("There was a girl named ");
  Serial.println(charName);

  Serial.print("she was ");
  Serial.print(charAge);
  Serial.println(" years old.");
}

void loop() {
  // put your main code here, to run repeatedly:

}
