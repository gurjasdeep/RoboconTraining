const int STEP_PIN = 10;
const int DIR_PIN  = 9;

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);

  digitalWrite(DIR_PIN, HIGH);  // Set direction
}

void loop() {
  // One step
  digitalWrite(STEP_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(STEP_PIN, LOW);

  // Wait one second before the next step
  delay(1000);
}
