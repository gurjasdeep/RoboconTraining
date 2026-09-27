// C++ code
//
int trig = 9;
int echo = 10;
int inp = A0;
int green = 2;
int yellow = 3;
int red = 4;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int read = analogRead(inp);

  int warningDistance = map(read, 0, 1023, 10, 50);

  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);

  int distance = duration * 0.034 / 2;

  if (distance > warningDistance){
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    Serial.println("Status: Safe distance");
  }  else if (distance > warningDistance / 2) {
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
    Serial.println("Status: Getting close to obstacle");
  } else {
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    Serial.println("Status: Dangerously close to obstacle");
  }
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  Serial.print("Warning Distance: ");
  Serial.print(warningDistance);
  Serial.println(" cm");

  Serial.println();

  delay(50);
}
