#include<stdio.h>
#include"main.h"
/**
 *get_bit - function that returns the value of a bit at a given index
 *@n: the number
 *@index: index of the bit to be returned
 *Return: the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int bit;

	if (index > 63)
	{
		return (-1);
	}
	for (i = 63; n; i--)
	{
		bit = (n >> i) & 1;
		if (i == index)
		{
			return (bit);
		}
	}
	return (-1);
}
