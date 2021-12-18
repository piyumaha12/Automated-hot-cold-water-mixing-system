#include <Wire.h>

#include <LiquidCrystal_I2C.h>

#include <DallasTemperature.h>
#include <OneWire.h>

LiquidCrystal_I2C lcd(0x27,16,2);
int temp1 = 12;
float temperature1 = 0;
OneWire oneWirePin1(temp1);
DallasTemperature sensors1(&oneWirePin1);
int temp2 = 11;
float temperature2 = 0;
OneWire oneWirePin2(temp2);
DallasTemperature sensors2(&oneWirePin2);
int temp3 = 21;
float temperature3 = 0;
OneWire oneWirePin3(temp3);
DallasTemperature sensors3(&oneWirePin3);
void setup() {
 Serial.begin(9600);
 sensors1.begin();
 sensors2.begin();
 sensors3.begin(); 
 lcd.init();
 lcd.backlight();
}
void loop() {
Serial.print("Requesting Temperatures from sensors1:\t ");
sensors1.requestTemperatures();
temperature1 = sensors1.getTempCByIndex(0);
Serial.print("Temperature is ");
Serial.print(temperature1);
Serial.println();
lcd.setCursor(0,0);
lcd.print("Temp is = ");
lcd.print(temperature1);
delay(2000);
Serial.print("Requesting Temperatures from sensors2:\t ");
sensors2.requestTemperatures();
temperature2 = sensors2.getTempCByIndex(0);
Serial.print("Temperature is ");
Serial.print(temperature2);
Serial.println();
lcd.setCursor(0,1);
lcd.print("Temp is = ");
lcd.print(temperature2);
delay(2000);
Serial.print("Requesting Temperatures from sensors3:\t ");
sensors3.requestTemperatures();
temperature3 = sensors3.getTempCByIndex(0);
Serial.print("Temperature is ");
Serial.print(temperature3);
delay(2000);
Serial.println();
}
