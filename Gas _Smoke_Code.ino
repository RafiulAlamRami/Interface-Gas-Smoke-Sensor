#include <LiquidCrystal.h> //library for LCD 
 
LiquidCrystal lcd(13, 12, 11, 10, 9, 8); 

const int SensorPin = 2;
const int LEDPin = 7;

void setup() 
{
  pinMode(SensorPin, INPUT); 
  pinMode(LEDPin, OUTPUT); 
  
  lcd.begin(20, 4); 
  lcd.setCursor(0,0); 
  lcd.setCursor(0,1);
  lcd.print(" GAS  DETECTION SYS");
}
void loop() 
{
  if(digitalRead(SensorPin) == HIGH)
  {
    digitalWrite(LEDPin,HIGH);
    // Prints Message on the LCD
    lcd.setCursor(0,3); 
    lcd.print("   Gas Detected    "); 
    delay(70);
    lcd.setCursor(0,3); 
    lcd.print("   Gas Detected.    "); 
    delay(70);
    lcd.setCursor(0,3); 
    lcd.print("   Gas Detected..   "); 
    delay(70);
    lcd.setCursor(0,3); 
    lcd.print("   Gas Detected...   "); 
    delay(70);
  }
  else
  {
    digitalWrite(LEDPin,LOW);
    // Prints Message on the LCD
    lcd.setCursor(0,3); 
    lcd.print("       No Gas       "); 
  }
  
}
