#include "main.h"
/**
 *print_sign -  a function that prints the sign of a number.
 *@n: a parameter to be checked
 *_putchar: to print a character
 *Return: returns a number according to its sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
