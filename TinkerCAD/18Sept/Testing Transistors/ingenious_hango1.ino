// C++ code
//

int tr = 3;
int ms = 5;
int n = 0;

void setup()
{
  pinMode(tr, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  if (n>=255){
    n = 0;}
  analogWrite(tr, n);
  analogWrite(ms, n);
  n++;
  Serial.print("Current Reading:");
  Serial.println(n);
  delay(100);
  
}
