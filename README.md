# Arduino sketches

Independent LED, button, and LCD exercises. Open the `.ino` file inside its matching folder in the Arduino IDE; these sketches are not meant to be combined into one program.

## Sketch guide

| Sketch | What the source does | Digital pins |
| --- | --- | --- |
| [NormalLed](NormalLed/NormalLed.ino) | Blinks an LED with one second on and one second off. | LED: 5 |
| [First_led](First_led/First_led.ino) | Blinks while the button input is read as HIGH. | LED: 5; button: 4 |
| [Hi_led](Hi_led/Hi_led.ino) | Changes the LED timing when the button input is HIGH. | LED: 5; button: 4 |
| [lcd_screen](lcd_screen/lcd_screen.ino) | Displays alternating messages on a 16×2 LCD. | LCD: 7–12 |
| [LCD_FINAL](LCD_FINAL/LCD_FINAL.ino) | Combines LCD messages with the LED/button timing exercise. | LED: 5; button: 4; LCD: 7–12 |
| [simpleLed](simpleLed/simpleLed.ino) | Early blink exercise; both `digitalWrite` statements are missing semicolons, so it will not compile as checked in. | LED: 8 |

## Before connecting hardware

- Match the wiring to the selected sketch, not to another example's pin assignments. Use a current-limiting resistor for an external LED.
- The button sketches use `INPUT`, not `INPUT_PULLUP`: provide a defined input level with suitable external pull-up/pull-down wiring. They read the button level repeatedly and do not implement debouncing.
- Both LCD sketches include `LiquidCrystal.h` and initialize `LiquidCrystal lcd(7, 8, 9, 10, 11, 12)`: RS=7, Enable=8, D4=9, D5=10, D6=11, D7=12. Their opening comments describe the remaining LCD connections and contrast control.
- Select the board and port for your actual hardware and verify the sketch before uploading. Board-specific compilation and physical wiring still need to be checked locally.
