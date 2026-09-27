int led=7;
int inp=8;

void setup(){
	pinMode(led, OUTPUT);
 	pinMode(inp, INPUT);
}

void loop(){digitalWrite(led, digitalRead(inp));}