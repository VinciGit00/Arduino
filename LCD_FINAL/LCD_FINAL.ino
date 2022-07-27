//www.elegoo.com
//2016.12.9

/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital p            in 7
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 9
 * LCD D5 pin to digital pin 10
 * LCD D6 pin to digital pin 11
 * LCD D7 pin to digital pin 12
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

//Informations about time
int delayled ;
int maxTime = 1000;
bool flag = true;

//Informations about pins
int pinLed = 5;
int buttonPin = 4;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Salvatore Strunz");
  delayled = maxTime;
  pinMode(pinLed, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  
  lcd.clear();
  lcd.print("Salvatore Strunz");
  delay(2500);
  lcd.clear();

  lcd.clear();
  lcd.print("Designed by ");
  lcd.setCursor(0,1);
  lcd.print("   Vinci");
  delay(2500);
  lcd.clear();
  
  
  if(digitalRead(buttonPin) == HIGH ){
    delayled = delayled -200;
     if (delayled == 200) {
        flag = true;
        delayled = maxTime;  
      } else {
        flag = false;
        }
  }

    if(flag == true) {
    digitalWrite(pinLed, HIGH);
    } else {
      digitalWrite(pinLed, HIGH);
      delay(delayled);
      digitalWrite(pinLed, LOW);
      delay(delayled);
       if (delayled == 200) {
        flag = true;
        delayled = maxTime;  
      } else {
        flag = false;
     }
 
    }
}
                                            
