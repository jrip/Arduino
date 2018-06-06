#include <Servo.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
Servo servo;

void setup() {
  servo.attach(5);
  lcd.begin(16,2);
  lcd.print("!!!");
  randomSeed(analogRead(0));
}

void loop() {
  int i = random(90,180);
  servo.write(i);
  lcd.clear();
  lcd.setCursor(0,0); 
  lcd.print(i);
  delay(500*random(1,4));
}
