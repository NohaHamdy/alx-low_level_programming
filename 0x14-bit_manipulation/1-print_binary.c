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

	for (i = 63; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		_putchar(bit + '0');
	}
}
