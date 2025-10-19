#include <avr/io.h>                        /* Defines pins, ports, etc */
#define F_CPU 16000000UL          /* Sets up the chip speed for delay.h */
#include <util/delay.h>                     /* Functions to waste time */

#define DELAYTIME 100
#define LED_DDR   DDRD
#define LED_PORT  PORTD

int main(void) {
  LED_DDR = 0b11111111;
  LED_PORT = 0;

  while (1) {
    PORTD = PORTD + 1;
    _delay_ms(DELAYTIME);
  }
}
