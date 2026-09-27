int inp1 = 3;
int inp2 = 2;

int green=8;
int yellow=9;
int red=10;

void setup()
{
  pinMode(inp1,INPUT);
  pinMode(inp2,INPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  bool s1 = digitalRead(inp1);
  bool s2 = digitalRead(inp2);
  if (s2 == LOW)
  {
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
    Serial.println("Robot is stopped.");
  }
  
  else if (s1 == HIGH && s2 == HIGH)
  {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    Serial.println("Robot is moving forward");
  }
  else
  {
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    Serial.println("Robot is moving backward");
  }
}