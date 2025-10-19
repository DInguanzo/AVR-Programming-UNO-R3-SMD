#include <avr/io.h>                        /* Defines pins, ports, etc */
#define F_CPU 16000000UL          /* Sets up the chip speed for delay.h */
#include <util/delay.h>                     /* Functions to waste time */

#define DELAYTIME 75                                   /* milliseconds */
#define LED_DDR   DDRD
#define LED_PORT  PORTD

int main(void) {

  LED_DDR = 0b11111111;           /* Data Direction Register B:
                                   all set up for output */

  while (1) {
    LED_PORT = 0b00000001;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b00000010;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b00000100;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b00001000;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b00010000;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b00100000;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b01000000;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b10000000;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b01000000;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b00100000;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b00010000;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b00001000;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b00000100;
    _delay_ms(DELAYTIME);
    LED_PORT = 0b00000010;
    _delay_ms(DELAYTIME);
  }
}
