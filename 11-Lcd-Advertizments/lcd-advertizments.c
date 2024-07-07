#include <mega32.h>
#include <delay.h>
#include <lcd.h>
#define XTAL 8000000
#asm
equ_lcd_port = 0x18
#end asm
DDRA = 0xff;
int main(){
  lcd_init(40);
  lcd_clear();
  lcd_gotoxy(0,0);
  lcd_puts("confectionery");
  lcd_gotoxy(1,0);
  lcd_puts("+8974564987");  
  delay_ms(10000);
  lcd_clear();
  lcd_gotoxy(0,0);
  lcd_gotoxy(1,0);
  lcd_puts("Orders are accepted");   
}


  
