#include <mega32.h>
#define XTAL 8000000
DDRB = 0x3c;
pinB.7=1;

int main (){
pinB.2=1;
pinB.4=0;
pinB.5=0;
pinB.3=1;
if(pinB.7=1){
    pinB.5=1;
    pinB.3=0;
    pinB.2=0;
    pinB.4=1;
  }
}




