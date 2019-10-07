/*	Author: yxing024
 *  Partner(s) Name: Hao Wu
 *	Lab Section:Lab3
 *	Assignment: Lab #  Exercise1 #
 *	Exercise Description: [count AB]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
  DDRA = 0x00; PORTA = 0x00;
  DDRB = 0x00; PORTB = 0x00;
  DDRC = 0xFF; PORTC = 0x00;

  unsigned char tmpA = 0x00;
  unsigned char tmpB = 0x00;
 
  unsigned char cnt  = 0x00;
  unsigned char i  =   0x00;





    /* Insert your solution below */
    while (1) 
      {
	tmpA = PINA;
        tmpB = PINB;
        cnt = 0x00;

        for (i=0;i<8;i++)
	  {
	    if (tmpA & (1<<i))
	      {
		cnt++;
	      }
	    if (tmpB & (1<<i))
	      {
		cnt++;
	      }
	  }

	PORTC = cnt;

      }
    return 1;
}
