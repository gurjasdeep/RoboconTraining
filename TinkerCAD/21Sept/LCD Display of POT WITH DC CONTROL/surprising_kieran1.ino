// C++ code
//
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int en = 3;
int in1 = 4;
int in2 = 5;
int pot = A3;


void setup()
{
  pinMode(en, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(pot, INPUT);
  
  lcd.init();
  lcd.backlight();
  
  lcd.setCursor(0,0);
  lcd.print("hello world");

  lcd.setCursor(0, 1);
}

void loop()
{
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("                ");
  lcd.setCursor(0,0);
  lcd.print("                ");
  
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  
  int read = analogRead(pot);
  int out = map(read, 0, 1023, 0, 255);
  

  lcd.setCursor(0,0);

  lcd.print(read);


  lcd.setCursor(0, 1);
  lcd.print(out);
  
  analogWrite(en, out);
  
  
}