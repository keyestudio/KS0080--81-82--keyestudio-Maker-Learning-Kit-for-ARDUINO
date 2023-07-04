/*
keyestudio Maker learning kit
Project 35
Steam Sensor
http//www.keyestudio.com
*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
    lcd.init();   // initialize the lcd 
    lcd.init();
    // Print a message to the LCD.
    lcd.backlight();
    lcd.setCursor(1,0);
    lcd.print("SensorValue :  ");
}
// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
      lcd.setCursor(3,1);
      lcd.print(sensorValue);
  delay(1); // delay in between reads for stability
}
