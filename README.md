# AVR-Microcontroller
- Projects:
   - [](url)
   - [](url)
   - [](url)
   - [](url)
   - [](url)
   - [](url)
   - [](url)

# ATmega32 
here we have 4 ports (A,B,C,D) and each port has 8 pins
![img](https://github.com/SamanKhalife/AVR-Microcontroller/blob/main/ATmega32.png)



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








