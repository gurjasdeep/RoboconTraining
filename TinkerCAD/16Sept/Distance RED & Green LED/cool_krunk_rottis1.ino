// C++ code
//
int trig = 5;
int echo = 6;
long duration ;
long distance ;
int red=3;
int green=2;


void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  	Serial.println("Sending Signal...");
	digitalWrite(trig, LOW);
  	delayMicroseconds(2);
  	digitalWrite(trig, HIGH);
  	delayMicroseconds(10);
  	digitalWrite(trig, LOW);
	
  	Serial.println("Calculating...");
  	duration = pulseIn(echo, HIGH);
  	distance = duration*(0.034/2);
  	Serial.print("Distance: ");
  	Serial.print(distance);
  	Serial.println(" cm");
  if (distance<=10){
  	digitalWrite(red, HIGH);
  	digitalWrite(green, LOW);
  } else {
    digitalWrite(red, LOW);	
    digitalWrite(green, HIGH);	

  }
  	delay(500);
  	
}