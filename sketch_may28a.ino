int sensorPin = A0;
int esikDegeri = 100;
int buzzerPin = 8;
int veri;
#include <LiquidCrystal.h>
const byte potPin=A1;
int potDeger;
int ledPin=3;
LiquidCrystal lcd(13,12, 11, 5, 4, 2);


void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  lcd.begin(16, 2);
  digitalWrite(ledPin, OUTPUT);
}
void loop() {
     
    
  veri = analogRead(sensorPin);
  if(veri > esikDegeri){
    digitalWrite(buzzerPin, LOW);
    delay(100);
    lcd.clear();
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(buzzerPin, HIGH);
    lcd.print("Su Yok");
    delay(400);
    digitalWrite(buzzerPin, LOW);
    lcd.clear();
    delay(400);
        digitalWrite(ledPin, LOW);
    
  }
}

