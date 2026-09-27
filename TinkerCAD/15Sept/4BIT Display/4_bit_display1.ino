int led1 = 2;
int led2 =3;
int led3 = 4;
int led4 = 5;



void setup() {
    pinMode(led1,OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3,OUTPUT);
	pinMode(led4, OUTPUT);

    Serial.begin(9600);
    Serial.println("Enter a decimal number from 0 to 15:");
}

void loop() {
  
    int number=Serial.parseInt();

    if (number >=0 && number<=15) {

        int n = number;
      
        int bit4 = n % 2;
        n /= 2;
        int bit3 = n % 2;
        n /= 2;
        int bit2 = n % 2;
        n /= 2;

        int bit1 = n % 2;
        digitalWrite(led1,bit1);
        digitalWrite(led2, bit2);
        digitalWrite(led3,bit3);
        digitalWrite(led4, bit4);

        Serial.print("input: "); Serial.println(number);

        Serial.print("in Binary -  ");
        Serial.print(bit1);
        Serial.print(bit2); Serial.print(bit3);
        Serial.println(bit4);

    } else {
        Serial.println("invalid input, enter a number from 0 to 15.");
    }

        Serial.println("Enter Another Number From 0 to 15:");
    
}
