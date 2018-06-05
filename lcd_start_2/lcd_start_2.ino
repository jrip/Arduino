#include <LiquidCrystal.h>

#define width 16

LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  lcd.begin(width,2);
}
int position = 0;
int direction = 1;

String getItem(int position)
{
   if (position > 6 && position < 10 ) {
     return "#";
   } else {
     return "*"; 
   }
}

void loop() {
  lcd.setCursor(position,0);
  lcd.print(" ");
  position = position + direction;
  if (position >= width -1 || position <= 0) {
    direction = - direction;
  }
  lcd.setCursor(position,0);
  lcd.print(getItem(position));
  delay(200);  
}



