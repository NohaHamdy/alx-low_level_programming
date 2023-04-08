#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
/**
 *binary_to_unit - function that converts a binary number to an unsigned int
 *@b: pointing to a string of 0 and 1 chars
 *Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int converted = 0;
	unsigned int power = 1;
	unsigned int L;

	if (b == NULL)
	{
		return (0);
	}
	L = strlen(b);
	for (i = L - 1 ; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			converted += 1 * power;
		} else if (b[i] == '0')
		{
			converted += 0 * power;
		}
		power *= 2;
	}
	return (converted);
}
