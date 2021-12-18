#include <OneWire.h>
#include <LiquidCrystal.h>
#include <Keypad.h>
#include <DallasTemperature.h>
const byte T1=1;   // TEMP SENSOR//
const byte T2=2;
const byte T3=3;
OneWire oneWirePin(T1);
DallasTemperature Thot(&oneWirePin);
OneWire oneWirePin1(T2);
DallasTemperature Tcold(&oneWirePin1);
OneWire oneWirePin2(T3);
DallasTemperature Tmcheck(&oneWirePin2);
int Tm=0;
float Th;
float Tc;

const byte REDled=4;
const byte GREENled=5;

const int Sol1[4]={6,7,8,9};
const int Sol2[2]={10,11};

const byte ROWS=4;
const byte COLS=3;
byte rowPin[ROWS]={14,15,16,17};
byte colPin[COLS]={18,19,20};
int keymap[ROWS][COLS]={
  {1,2,3},
  {4,5,6},
  {7,8,9},
  {10,0,11}
};
Keypad keypad=Keypad (makeKeymap(keymap), rowPin,colPin, ROWS,COLS);

LiquidCrystal lcd(21,22,23,24,25,26);

//logic matrix//
float Ratio[4][4]={
  {1,0.5,0.33,0.25},
  {2,1,0.66,0.5},
  {3,1.5,1,0.75},
  {4,2,1.33,1}
};

void setup() {
  lcd.begin(16,2);
  Thot.begin();
  Tmcheck.begin();
  Tcold.begin();
  for(int i=0;i<4;i++){
    pinMode(Sol1[i], OUTPUT);
  }
  for(int i=0;i<3;i++){
    pinMode(Sol2[i], OUTPUT);
  }
  pinMode(REDled, OUTPUT);
  pinMode(GREENled, OUTPUT);
  lcd.print("WELCOME");
  delay(250);
  lcd.clear();
  digitalWrite(GREENled, HIGH);
}

void loop() {
  int mh=0;
  int mc=0;
  lcd.print("Enter temperatur");
  lcd.setCursor(1,7);
  lcd.print(keyInput());
  int ok=keypad.getKey();
  if(ok==10){
   Th=Thot.getTempCByIndex(0);
   Tc=Tcold.getTempCByIndex(1);

   //division//
   float A=Tm-Tc;
   float B=Th-Tm;
   float C=A/B;
   float SmallerOldvalue=4;
   float Smallernewvalue=0;
   float Largeroldvalue=4;
   float Largernewvalue=0;

   //logic of mixer//
   for(int i=0;i<4;i++){
    for(int j=0;i<4;j++){
      float tablevalue= Ratio[i][j];
      if(tablevalue==C){
        mh=i+1;
        mc=j+1;
      }
      if(tablevalue<C){
        Smallernewvalue=tablevalue;
        if(SmallerOldvalue<Smallernewvalue){
          SmallerOldvalue=SmallerOldvalue;
          mh=i+1;
          mc=j+1;
        }
        if(SmallerOldvalue>Smallernewvalue){
          SmallerOldvalue=Smallernewvalue;
          mh=i+1;
          mc=j+1;
        }
        
      }
      if(tablevalue>C){
        Largernewvalue=tablevalue;
        if(Largernewvalue<Largeroldvalue){
          Largeroldvalue=Largernewvalue;
        }
        if(Largernewvalue>Largeroldvalue){
          Largeroldvalue=Largeroldvalue;
        }
      }
      
    }
   }
   int mixing_ratio=(mh*10)+mc;
   switch(mixing_ratio){
    case 11:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol1[2], 1);
    break;
    case 12:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol2[1], 1);
    break;
    case 13:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol2[1], 1);
    digitalWrite(Sol1[2], 1);
    break;
    case 14:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol2[1], 1);
    digitalWrite(Sol1[2], 1);
    digitalWrite(Sol1[3], 1);
    break;
    case 21:
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol1[2], 1);
    break;
    case 22:
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol2[1], 1);
    break;
    case 23:
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol2[1], 1);
    digitalWrite(Sol1[2], 1);
    break;
    case 24:
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol2[1], 1);
    digitalWrite(Sol1[2], 1);
    digitalWrite(Sol1[3], 1);
    break;
    case 31:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol1[2], 1);
    break;
    case 32:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol2[1], 1);
    break;
    case 33:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol1[2], 1);
    digitalWrite(Sol2[1], 1);
    break;
    case 34:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol2[1], 1);
    digitalWrite(Sol1[2], 1);
    digitalWrite(Sol1[3], 1);
    break;
    case 41:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol1[1], 1);
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol1[2], 1);
    break;
    
    case 42:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol1[1], 1);
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol2[1], 1);
    break;
    case 43:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol1[1], 1);
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol1[2], 1);
    digitalWrite(Sol2[1], 1);
    break;
    case 44:
    digitalWrite(Sol1[0], 1);
    digitalWrite(Sol1[1], 1);
    digitalWrite(Sol2[0], 1);
    digitalWrite(Sol1[2], 1);
    digitalWrite(Sol1[3], 1);
    digitalWrite(Sol2[1], 1);
    break;
   }

    
  }
  else
  lcd.clear();
  lcd.print("invalid input");
  delay(500);
}



//declaration of custom function keyInput//

int keyInput(){
 int keypressed=keypad.getKey();
 int key1=keypressed*10;
 int keypressed1=keypad.getKey();
 Tm= key1+keypressed;
 return Tm;

}

