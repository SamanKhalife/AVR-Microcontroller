#include <mega32.h>
#define XTAL 8000000
DDRA = 0x00;
DDRB = 0xff;
pinA.7 && pinA.5 && pinA.3 = 1;
int main(){
    if(pinA.7 == 1 && pinA.5 == 0 && pinA.3 == 0){
      pinB.4=1;
      pinB.2=1;
  }
  else{
    if(pinA.7 == 0 && pinA.5 == 1 && pinA.3 == 1){
        pinB.4=0;
        pinB.2=1;
  }
  else{
    if(pinA.7 == 0 && pinA.5 == 0 && pinA.3 == 1){
        pinB.4=1;
        pinB.2=0;
  }
}



