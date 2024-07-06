#include <mega32.h>
#include <delay.h>
#define XTAL 8000000
#flash char digit[9]={0x3f,}
DDRA = 0x00;
DDRC = 0xff;
DDRB = 0xff;
portC = 0xff;
int main (){
if(port==oxff){
  for (int i=0;i<=5, i++)
    {
      portc = digit[i];
      delay-ms(10000);
    }
    pinb.5=1;
    pinb.6=1;
  }
  else
  {
    pinb.7=1;
    pinb.0=1;
  }
}