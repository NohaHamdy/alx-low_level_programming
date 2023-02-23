#include "main.h"
/**
 *print_square - a function that prints a square, followed by a new line
 *
 *@size: size of square
 */
void print_square(int size)
{
	int L, W;

	for (L = size; L > 0; L--)
	{
		for (W = size; W > 0; W--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');

}
