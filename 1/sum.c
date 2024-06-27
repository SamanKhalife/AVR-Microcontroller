// here is a simple C program for the ATmega32 microcontroller that reads two values, x and y, from ports A and B and displays their sum on port C. This program uses an external crystal with a frequency of 8 MHz

#include <mega32.h>
#define XTAL 8000000
                   // Configure port A and B as input
DDRA = 0x00;           // Set all pins of port A as input
DDRB = 0x00;           // Set all pins of port B as input
                    // Configure port C as output
DDRC = 0xFF;           // Set all pins of port C as output
PORTA && PORTB = 0xff

int main (){
    int x,y,z;
    PortA=x;
    PortB=y;
    z=x+y;
    Portc=z;
}




