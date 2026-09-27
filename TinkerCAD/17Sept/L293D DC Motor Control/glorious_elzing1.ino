// C++ code
//
int out1 = 5;
int out2 = 6;
int cont = 3;

void setup()
{
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(cont, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Starting");
  
  digitalWrite(out1, LOW);
  digitalWrite(out2, LOW);
  
  delay(2000);
  
  Serial.println("5 High 6 LOW");
  digitalWrite(out1, HIGH);
  digitalWrite(out2, LOW);
  
  analogWrite(cont, 100);
  delay(1000);
  analogWrite(cont, 200);
  delay(1000);
  analogWrite(cont, 250);
  delay(1000);
  
  
  delay(300);
  
  Serial.println("Starting 2");
  
  digitalWrite(out1, LOW);
  digitalWrite(out2, LOW);
  
  delay(2000);
  
  Serial.println("5 High 6 LOW");
  digitalWrite(out1, LOW);
  digitalWrite(out2, HIGH);
  
  analogWrite(cont, 100);
  delay(1000);
  analogWrite(cont, 200);
  delay(1000);
  analogWrite(cont, 250);
  delay(1000);
  
  
  delay(300);
  

  
}