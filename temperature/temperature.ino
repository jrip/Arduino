#include <LiquidCrystal.h>

#define TERMIST_B 4300 
#define VIN 5.0

LiquidCrystal lcd(13,12,11,10,9,8);

void setup() {
  lcd.begin(16,2);
  lcd.print("!!!");
  delay(1000); 
}

void loop() {
  float voltage = analogRead(A0) * VIN / 1024.0;
  float r1 = voltage / (VIN - voltage);
  float temperature = 1./( 1./(TERMIST_B)*log(r1)+1./(25. + 273.) ) - 273;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(temperature);
  delay(1000);
}
