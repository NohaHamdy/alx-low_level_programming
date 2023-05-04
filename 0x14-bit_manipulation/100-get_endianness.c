#include"main.h"
/**
 *get_endianness - a function that checks the endianness.
 *Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *s;

	s = (char *)&test;

	if (*s == 1)
	{
		return (1); /* Little endian */
	}
	return (0); /* Big endian */
}
