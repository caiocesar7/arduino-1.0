int bip = 41;

void setup() {
  pinMode(bip, OUTPUT);
}

void loop() {
  digitalWrite(bip, HIGH);
  delay(200);
  digitalWrite(bip, LOW);
  delay(200);
}
