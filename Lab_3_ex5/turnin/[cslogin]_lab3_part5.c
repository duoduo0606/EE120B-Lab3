/*	Author: yxing024
 *  Partner(s) Name: Hao Wu
 *	Lab Section:Lab 3
 *	Assignment: Lab #  Exercise 5#
 *	Exercise Description: [Air bag]
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
    DDRB = 0xFE; PORTB = 0x00;
    DDRD = 0x00; PORTD = 0x00;

    unsigned char weightB;
    unsigned char weightD;
    unsigned short weight;
    unsigned char tmpB;

    /* Insert your solution below */
    while (1) 
      {
	weightD = PIND;
        tmpB = PINB & 0x01;
	weightB = tmpB & 0x01;
	PORTB = 0x00;

        weight = (weightD<<1) + weightB;
  	
	if (weight > 70)
	  {
	    tmpB = tmpB | 0x02;
	  }
        
	if ((weight > 5)&(weight < 70))
	  {
	    tmpB = tmpB | 0x04;
	  }
	  
	
	PORTB = tmpB;
      }
    return 1;
}
