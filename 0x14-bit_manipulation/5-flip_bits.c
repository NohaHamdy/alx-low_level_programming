#include <stdio.h>
#include"main.h"
/**
 *flip_bits - function that returns number of bits you would need
 *to flip to get from one number to another
 *@n: first number
 *@m: second number
 *Return: number of flipped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	int i;
	int bit = 0;
	unsigned long int temp;

	temp = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		bit = (temp >> i) & 1;
		if (bit == 1)
		{
			counter++;
		}
	}
	return (counter);
}
