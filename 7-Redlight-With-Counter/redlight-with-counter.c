#include <mega32.h>
#include <delay.h>
#define XTAL 8000000
#flash char digit[9]={0x3f,}
DDRA = 0x3c;
pinA.0=1;
pinA.7=1;
int main (){
pinb.2=1;
pinb.3=1;
pinb.4=1;
pinb.7=1;
if(port d == 1){
  for (int i=0;i<=5, i++)
    {
      portc = digit[i];
      delay-ms(10000);
    }
    pinb.2=1;
    pinb.5=1;
  }
  if(port c == 1){
    for (int i=0;i<=5, i++){
    portc = digit[i];
    delay-ms(10000);
    }
    pinb.4=1;
    pinb.3=1;
  }
}
