#include<avr/io.h>

/*This header file is needed for the compiler to understand the register and bit names and de
vice specific assignments, such as ports and pins*/

int main()
/*Traditionally, a main program running on  micro-controller will never end. I
t must go on running in an infinite loop. As such, it is immaterial what the
 return type of main is, but Linux based compilers, like the GCC, complain if it is not 'int'*/

{
MCUCSR |= 0x80;
MCUCSR |= 0x80;
/*The MCUCSR is the MCU Control and Status Register. The most significant bit is the JTAG disable bit(JTD).
 Since the JTAG hardware shares pins on PORTC, it needs to be disabled before we can use all PORTC pins.*/

DDRC = 0xff;
/*The Data Direction Register (DDR) is an 8 bit register that controls the direction of data flow on 
each pin of a given port. Thus there are 4 DDR registers - DDRA through DDRD for ports A, B, C and D. 
A value of '1' in each bit of the data direction register. Setting 0xff, therefore, causes the entire port to be set as output.*/

PORTC = 0xff;
/*The PORT register sets the actual value (level) on the PORT pins.
 Each of the 8 bits in this register correspond to one pin on the respective port.
 A value of 0xFF sets all the pins high, and will cause both the LEDs to glow.*/

while(1);
}
