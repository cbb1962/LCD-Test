/*
 Based on: http://www.hobbytronics.co.uk/arduino-tutorial10-lcd

 The circuit:
 * LCD VSS pin to Ground
 * LCD VDD pin to +5vdc
 * LCD VO pin to Middle pin of Pot
 * LCD RS pin to digital pin 12
 * LCD R/W pin to Ground
 * LCD Enable pin to digital pin 11
 * LCD D0 pin not connected
 * LCD D1 pin not connected
 * LCD D2 pin not connected
 * LCD D3 pin not connected
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD A pin to +5vdc
 * LCD K pin to Ground

 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // declare pin 9 to be an output:
 // pinMode(9, OUTPUT);  
 // analogWrite(9, 50);   
  // set up the LCD's number of columns and rows: 
  lcd.begin(20, 4);
  // Print a message to the LCD.
   lcd.print("    SOUS VIDE 2.0");
   lcd.setCursor(0, 1);
  lcd.print("  SET TEMP: 132.0 F");
    lcd.setCursor(0, 2);
  lcd.print("  ACT TEMP: 131.6 F");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 3);
  // print the number of seconds since reset:
  lcd.print("   ELAPSED TIME:");
  lcd.print(millis()/1000);
  
}