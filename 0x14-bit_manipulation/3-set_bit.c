#include<stdio.h>
#include"main.h"
/**
 *set_bit - function that sets the value of a bit to 1 at a given index
 *@n: pointer to the number
 *@index: index of the bit we want to set
 *Return: 1 if it worked,or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
