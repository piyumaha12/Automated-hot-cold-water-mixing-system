#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <Keypad.h>

LiquidCrystal_I2C lcd(0x27,16,2);
const byte ROWS = 4; 
const byte COLS = 3; 
int i=0;

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

byte rowPins[ROWS] = {4,5,6,7}; 
byte colPins[COLS] = {8,9,10}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}
  
void loop(){
  char customKey = customKeypad.getKey();
  if (customKey){
    
    Serial.println(customKey);
    lcd.setCursor(0,i);
    lcd.print(customKey);
    i++;
  }
}
