// C++ code
//
int inp = A0;
int led = 2;


void setup()
{
  pinMode(led, OUTPUT);
  pinMode(inp, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(inp);
  Serial.print(reading);
  Serial.print(" Converted to ");
  int output = reading >> 2;
  Serial.println(output);
  analogWrite(led, output);
  
}