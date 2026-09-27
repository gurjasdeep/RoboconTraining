// C++ code
//

int led = 9;
int echo = 6;
int trig = 5;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}
  e <= 20){output = 0;}
  else if (distance >=200){output = 255;}
  else{
    output = map(distance, 20, 200, 0, 255);}
  analogWrite(9, output);
  
}

(inp - lowIn)       (highOut - lowOut)
---------------  X                         + lowOut
highIn - lowIn
