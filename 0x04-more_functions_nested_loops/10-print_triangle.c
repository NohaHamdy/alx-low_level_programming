#include "main.h"

/**
 *print_triangle -  a function that prints a triangle, followed by a new line
 *@size: the size of triangle
 */
void print_triangle(int size)
{
	int j, i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
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
