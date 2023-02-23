#include "main.h"
/**
 *print_square - a function that prints a square, followed by a new line
 *
 *@size: size of square
 */
void print_square(int size)
{
	int L, W;

	if (size != 0)
	{
		for (L = size; L > 0; L--)
		{
			for (W = size; W > 0; W--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
	_putchar('\n');
	}
}
