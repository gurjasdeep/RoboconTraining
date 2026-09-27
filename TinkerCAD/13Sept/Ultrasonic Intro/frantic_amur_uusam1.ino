// C++ code
//
int trig = 5;
int echo = 6;
long duration = 0;
long distance = 0;


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
  	delay(1000);
  	
}