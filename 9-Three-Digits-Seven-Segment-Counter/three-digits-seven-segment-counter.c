#include <mega32.h>
#include <delay.h>
#define XTAL 8000000
#flash char digit[9]={0x3f,}
DDRA = 0xff;
DDRB = 0xff;
int main(){
for(int K=0;k<=9;k++){
  for(int i=0;i<=9;i++){
    for(int j=0;j<=9;j++){
       portB = oxo1;
       portA = digit[i];
       portB = oxo2;
       portA = digit[i];
      } 
    }
  }
}
