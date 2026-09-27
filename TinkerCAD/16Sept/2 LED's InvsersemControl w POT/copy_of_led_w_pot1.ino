// C++ code
//
int inp = A0;
int led1 = 2;
int led2 = 3;


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(inp, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(inp);
  Serial.print(reading);
  Serial.print(" Converted to ");
  int output = reading >> 2;
  Serial.println(255-output);
  Serial.println(output);
  analogWrite(led2, 255-output);
  analogWrite(led1, output);
  
}