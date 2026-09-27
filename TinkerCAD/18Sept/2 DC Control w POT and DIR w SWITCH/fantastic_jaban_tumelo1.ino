// C++ code
//

int en1 = 5;
int en2 = 6;
int in1 = 12;
int in2 = 13;
int in3 = 10;
int in4 = 11;

int pot1 = A0;
int pot2 = A1;

int sw1 = 2;
int sw2 = 3;

int read = 0;

void setup()
{
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(pot1, INPUT);
  pinMode(pot2, INPUT);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
}

void loop()
{
  
  digitalWrite(in1, digitalRead(sw1));
  digitalWrite(in2, !(digitalRead(sw1)));
  digitalWrite(in3, digitalRead(sw2));
  digitalWrite(in4, !(digitalRead(sw2)));
  read = analogRead(pot1);
  analogWrite(en1, map(read, 0, 1023, 0, 255));
  
  
  read = analogRead(pot2);
  analogWrite(en2, map(read, 0, 1023, 0, 255));
  
}