#include <mega32.h>
#include <delay.h>
#define XTAL 8000000
#flash char digit[9]={0x3f,}
DDRC = 0xff;

int main (){
for (int i=0;i<=9, i++)
  {
    portc = digit[i];
    delay-ms(10000);
  }
}