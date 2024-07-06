# AVR-Microcontroller
- Projects:
   - [Basics-things](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/1-Basics)
   - [Automatic-Light-Switch](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/2-Automatic-Light-Switch)
   - [Redlight](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/3-Redlight)
   - [Simple-Auto-redlightt](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/4-Simple-Auto-redlightt)
   - [Seven-Segment-Counter](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/5-Seven-Segment-Counter)
   - [Smart-Digital Door-Lock](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/6-Smart-Digital%20Door-Lock)
   - [Redlight-With-Counter](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/7-Redlight-With-Counter)
   - [Two-Digits-Seven-Segment-Counter](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/8-Two-Digits-Seven-Segment-Counter)
   - [Three-Digits-Seven-Segment-Counter](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/9-Three-Digits-Seven-Segment-Counter)
   - [Lcd-Prints](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/10-Lcd-Prints)
   - [Lcd-Advertizments](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/11-Lcd-Advertizments)
   - [Highway-Status](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/12-Highway-Status)
   - [Robot-Navigation](https://github.com/SamanKhalife/AVR-Microcontroller/tree/main/13-Robot-Navigation)
   - [ATM](url)

# ATmega32 
here we have 4 ports (A,B,C,D) and each port has 8 pins
![img](https://github.com/SamanKhalife/AVR-Microcontroller/blob/main/images/ATmega32.png)


# Some Basics
DDRx = setting port type

input = 0

output= 1

### Assume the port A is an input port
```
DDRA = 0x00                 AAAA,AAAA
       __                   0000,0000
       |                     0  ,  0 
this tow digit shows Hexadecimal initialization
```
### Assume the port B is an input port
```
DDRA = 0x00                 BBBB,BBBB
                            1111,1111
                             1  ,  1 
```

### If pins 2, 4, and 7 are input pins and pins 1, 5, and 6 are output pins

```
AAAA,AAAA
0110,x01x
```
toggle ----> Pins that are not connected to anything (we can set 0 or 1)

### Port initialization

`PORTx`   like  `portA=0x54` 


### Pin initialization

`Pinx.n = y`  like   `pinA.2 = 1`








