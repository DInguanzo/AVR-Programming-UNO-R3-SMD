                                                       /* Blinker Demo */

// ------- Preamble -------- //
#include <avr/io.h>                        /* Defines pins, ports, etc */
#include <util/delay.h>                     /* Functions to waste time */


int main(void) {

  // -------- Inits --------- //
  DDRB |= 0b00100000;            /* Data Direction Register B bit 5:
                                   writing a one to the bit
                                   enables output. */

  // ------ Event loop ------ //
  while (1) {

    PORTB = 0b00100000;          /* Turn on fith LED bit/pin in PORTB */
    _delay_ms(500);                                           /* wait */

    PORTB = 0b00000000;          /* Turn off all B pins, including LED */
    _delay_ms(500);                                           /* wait */

  }                                                  /* End event loop */
  return 0;                            /* This line is never reached */
}
