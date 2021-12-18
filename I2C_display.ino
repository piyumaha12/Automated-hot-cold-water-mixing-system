#include <LiquidCrystal.h>

#include <LiquidCrystal_I2C.h>


#include <Wire.h> 


// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3,POSITIVE);

void setup(){
  lcd.begin();
  lcd.backlight();
  Serial.begin(9600);
   lcd.setCursor(1,0);
  lcd.print("Hello");
}
void loop(){
  

}

