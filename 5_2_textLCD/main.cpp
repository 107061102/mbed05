#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7); // RS, E, DB4-DB7

int main()
{
      lcd.printf("107061102\n");
      for (char x = 0; x <= 30; x++)
      { // display numbers 0-9
            lcd.locate(5,1);
            lcd.printf("%d", x);
            ThisThread::sleep_for(500ms);
      }
}