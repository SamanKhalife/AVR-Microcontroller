#include <mega32.h>
#include <delay.h>
#define XTAL 8000000
DDRB = 0xff;
int main (){
pinB.2=1;
pinB.4=0;
pinB.5=0;
pinB.3=1;
delay_ms(10000);
if(pinB.7=1){
    pinB.5=1;
    pinB.3=0;
    pinB.2=0;
    pinB.4=1;
    delay_ms(10000);
  }
}


