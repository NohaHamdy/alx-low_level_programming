#include "main.h"
/**
 *times_table - a function that prints the 9 times table, starting with 0
 *_putchar: to print a letter
 */
void times_table(void)
{
	int a, b, r;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			r = a * b;
			if ((r / 10) == 0 && b > 0)
			{
				_putchar(' ');
			}
			if ((r / 10) != 0)
			{
				_putchar (r / 10 + '0');
			}
			_putchar(r % 10 + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
