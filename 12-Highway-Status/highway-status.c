#include <mega32.h>
#include <delay.h>
#include <lcd.h>
#define XTAL 8000000
#flash char digit[9]={0x3f,}
#asm
equ_lcd_port = 0x15
equ_lcd_port = 0x18
#end asm
DDRC = 0xff;
DDRB = 0xff;
DDRA = 0x00;
pinA.7 && pinA.5 && pinA.3 = 1 ;
int main(){
  while (1){
   if(pinA.7 == 0 && pinA.5 == 0 && pinA.3 == 1){
      lcd_init(20);
      lcd_clear();
      lcd_gotoxy(0,5);
      lcd_puts("No traffic");
    }
    else{
    if(pinA.7 == 0 && pinA.5 == 1 && pinA.3 == 0){
      lcd_init(20);
      lcd_clear();
      lcd_gotoxy(0,5);
      lcd_puts("No traffic");
    }
    else{
    if(pinA.7 == 1 && pinA.5 == 0 && pinA.3 == 0){
      lcd_init(20);
      lcd_clear();
      lcd_gotoxy(0,5);
      lcd_puts("No traffic");
    }
    else{
    if(pinA.7 == 1 && pinA.5 == 0 && pinA.3 == 1){
      lcd_init(20);
      lcd_clear();
      lcd_gotoxy(0,7);
      lcd_puts("Heavy");
    }
    else{
    if(pinA.7 == 1 && pinA.5 == 1 && pinA.3 == 0){
      lcd_init(20);
      lcd_clear();
      lcd_gotoxy(0,7);
      lcd_puts("Heavy");
    }
    else{
    if(pinA.7 == 0 && pinA.5 == 1 && pinA.3 == 1){
      lcd_init(20);
      lcd_clear();
      lcd_gotoxy(0,7);
      lcd_puts("Heavy");
    }
    else{
    if(pinA.7 == 1 && pinA.5 == 1 && pinA.3 == 1){
      lcd_init(20);
      lcd_clear();
      lcd_gotoxy(0,6);
      lcd_puts("Traffic");
    }
  }
    lcd_init(16);
    lcd_clear();
    lcd_gotoxy(0,0);
    lcd_puts("Fasten the seat belt");
    delay_ms(10000)
    lcd_init(16);
    lcd_clear();
    lcd_gotoxy(0,0);
    lcd_puts("Don't talk on phone");
    delay_ms(10000)
}










