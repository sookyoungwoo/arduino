void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    long ch = Serial.parseInt();
    Serial.write(ch);
    if (ch == 1)
      digitalWrite(2, HIGH);
    if (ch == 0)
      digitalWrite(2, LOW);
  }
}
