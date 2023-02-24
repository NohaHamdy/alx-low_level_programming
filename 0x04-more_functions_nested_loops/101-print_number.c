#include "main.h"
/**
 *print_number - a function that prints an integer
 *@n: integer to be printed
 */
void print_number(int n)
{
	int x, p;

	x = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10 ^ x) != 0)
	{
		p = x;
		x++;
	}
	for (; p >= 0; p--)
	{
		_putchar((n / (10 ^ p)) + '0');
		n = n % (10 ^ p);
		_putchar(n + '0');
	}
}
