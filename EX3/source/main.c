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
	PA = PINA & 0x0F;
        PC = PINA;
        tempB=0x00;
    if(PA==1|PA==2){
       tempB=0x60;
}
    if(PA==3|PA==4){
       tempB=0x70;
}
    if(PA==5|PA==6){
       tempB=0x38;
}
    if(PA==7|PA==9|PA==8){
       tempB=0x3C;
}
   if(PA==10|PA==11|PA==12){
       tempB=0x3E;
}
    if(PA==13|PA==14|PA==15){
       tempB=0x3F;
} 
   if(PC>>4 == 0x03){
   tempB = (tempB|0x80);
}
     PORTB=tempB;
 }
    return 1;
}
