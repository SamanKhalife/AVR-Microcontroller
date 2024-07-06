// here is a simple C program for the ATmega32 microcontroller that reads two values, x and y, from ports A and B and displays their sum on port C. This program uses an external crystal with a frequency of 8 MHz

#include <mega32.h>
#define XTAL 8000000
DDRA = 0xA8;
pinA.0=1;
int main (){
pinA.3=1;
pinA.5=0;
 if(pinA.0 == 1){
    pinA.7=1;
    pinA.5=1;
    pinA.3=0;
 }
}




