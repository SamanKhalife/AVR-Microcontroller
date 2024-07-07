#include <mega32.h>
#include <lcd.h>
#define XTAL 8000000
#asm
equ_lcd_port = 0x18
#end asm
DDRA = 0xff;
int main(){
  lcd_init(20);
  lcd_clear();
  lcd_gotoxy(0,0);
  lcd_puts("AVR CLASS")
}
