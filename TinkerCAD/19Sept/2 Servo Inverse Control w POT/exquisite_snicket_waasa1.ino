// C++ code
//
#include <Servo.h>

int pot = A5;
int ser1 = 5;
int ser2 = 6;
Servo s1;
Servo s2;
  


void setup()
{
	s1.attach(ser1);
	s2.attach(ser2);
	Serial.begin(9600);
}

void loop()
{
  	
  	int potValue = analogRead(pot);
  	Serial.println(potValue);
  	int out = map(potValue, 0, 1023, 0, 180);
    
  	Serial.println(out);
  	s2.write(180-out);
	s1.write(out);
}