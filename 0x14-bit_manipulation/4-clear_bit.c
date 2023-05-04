#include<stdio.h>
#include"main.h"
/**
 *clear_bit - function that sets the value of a bit to 0 at a given index
 *@n: pointer to the number
 *@index: index of the bit we want to set
 *Return: 1 if worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
