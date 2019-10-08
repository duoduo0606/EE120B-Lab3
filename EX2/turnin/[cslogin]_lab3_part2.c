/*	Author: hwu901
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
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
  DDRA = 0x00;
  DDRB = 0xFF;
  PORTB = 0x00;
  unsigned char PA = 0x00;
  unsigned char PC= 0x00;
  unsigned char tempB=0X00;



    /* Insert your solution below */
    while (1)
      {
	PA = PINA;
        tempB=0X00;
   switch (PA){
      case 1:
      tempB=0x60;
      break;
      case 2:
      tempB=0x60;
      break;
      case 3:
      tempB=0x70;
      break;
      case 4:
      tempB=0x70;
      break;
      case 5:
      tempB=0x38;
      break;
      case 6:
      tempB=0x38;
      break;
      case 7:
      tempB=0x3C;
      break;
      case 8:
      tempB=0x3C;
      break;
      case 9:
      tempB=0x3C;
      break;
      case 10:
      tempB=0x3E;
      break;
      case 11:
      tempB=0x3E;
      break;
      case 12:
      tempB=0x3E;
      break;
      case 13:
      tempB=0x3F;
      break;
      case 14:
      tempB=0x3F;
      break;
      case 15:
      tempB=0x3F;
      break;
 }
     PORTB=tempB;
}
    return 1;
}
