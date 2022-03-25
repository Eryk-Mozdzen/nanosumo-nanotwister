/*
 * twister_software.c
 *
 * Created: 25.03.2022 10:34:45
 * Author : Paor
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0b00000010;
    while (1) 
    {
		_delay_ms(3000);
		PORTB ^= 0b00000010;
    }
}

