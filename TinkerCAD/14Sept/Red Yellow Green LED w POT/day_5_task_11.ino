// C++ code
//
int green = 6;
int red = 3;
int yellow = 5;
int inp = A5;


void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(inp, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int read = analogRead(inp);
  int converted = map(read, 0, 1023, 0, 255);
  
  Serial.print("Cuurent Reading: ");
  Serial.println(read);
  
  Serial.print("Converted Reading: ");
  Serial.println(converted);
  
  if (read <= 340 && read >= 0){
    analogWrite(green, converted);
    analogWrite(red, 0);
    analogWrite(yellow, 0);
    Serial.println("Green LED is ON.");
    
  } else if (read>340 && read <= 680){
    analogWrite(yellow, converted);
    analogWrite(red, 0);
    analogWrite(green, 0);
    Serial.println("YELLOW LED is ON.");
  } else {
    analogWrite(red, converted);
    analogWrite(green, 0);
    analogWrite(yellow, 0);
    Serial.println("RED LED is ON.");
  }
  delay(1000);
  
  
}