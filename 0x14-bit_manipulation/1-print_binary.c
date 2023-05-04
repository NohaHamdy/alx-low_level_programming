#include<stdio.h>
#include"main.h"
/**
 *print_binary - function that prints the binary representation of a number
 *@n: number to be presented in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int bit;
	int bits_counter = 0;

	for (i = 63; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
		{
			bits_counter++;
			_putchar('1');
		} else if (bits_counter != 0)
		{
			_putchar('0');
		}
	}
	if (bits_counter == 0)
	{
		_putchar('0');
	}
}
