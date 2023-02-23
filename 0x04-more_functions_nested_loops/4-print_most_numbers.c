#include "main.h"
/**
 *print_most_numbers - a function that prints most numbers, from 0 to 9
 *
 *_putchar: a function that prints a character
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
