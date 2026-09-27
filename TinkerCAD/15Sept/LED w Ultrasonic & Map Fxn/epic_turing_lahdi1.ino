// C++ code
//

int led = 9;
int echo = 6;
int trig = 5;

float myMap(float input,float lowIn,float highIn,float lowOut,float highOut);

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  float duration = pulseIn(echo, HIGH);
  
  float distance = duration*0.034/2;
  
  Serial.println("Before");
  Serial.println(distance);
  Serial.println("After");
  
  float fOutput = myMap(distance, 20, 200, 0, 255);
  
  Serial.println(fOutput);
  
  int output = fOutput;
  
  analogWrite(led, output);
  
  
  delay(1000);
  
  
}

float myMap(float input,float lowIn,float highIn,float lowOut,float highOut){
  if (input > highIn){
    return highOut;
  } else if (input < lowIn){
    return lowOut;
  }
  
  
  float a = input - lowIn;
  float b = highIn - lowIn;
  float c = highOut - lowOut;
  return ((a*c)/b)+lowOut;
}