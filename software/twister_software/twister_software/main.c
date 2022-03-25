/*
 * twister_software.c
 *
 * Created: 25.03.2022 10:34:45
 * Author : Paor
 */ 

#define F_CPU 128000UL

#include <avr/io.h>
#include <util/delay.h>


void my_delay(uint8_t counter)
{
	while(counter != 0)
	{
		_delay_ms(1);
		counter--;
	}
}

int main(void)
{
	DDRB = 0b00001010;
	PORTB = 0b00000000;
	_delay_ms(1000);
	while(PINB & 0b00010000); //start
	
	
	
	for(uint8_t zrywy=0; zrywy<3; zrywy++)
	{
		for(uint8_t i=14; i<16; i++)
		{
			PORTB = 0b00001000;
			my_delay(i);
			PORTB = 0b00000000;
			my_delay(16-i);
		}
		_delay_ms(1000);
	}
	
	
	
	
	
	
	
	PORTB = 0b00000000; //off
	_delay_ms(2000);
	PORTB = 0b00000010; //suicide
	
	
	
	
	
    while (1) 
    {
		
    }
}

