#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  lcd.begin(16,2);
  lcd.print("!!!");
  delay(2000); 
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("   ");
  for(int i=0;i<=100;i++){
    lcd.setCursor(0,0);
    lcd.print(i);
    delay(100);  
 }
}
