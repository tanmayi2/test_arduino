void setup() {
  // put your setup code here, to run once:
  //Serial.print("hi");
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(8, LOW);
}
