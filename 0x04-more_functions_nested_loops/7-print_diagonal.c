#include "main.h"
/**
 *print_diagonal - a function that draws a diagonal line in the terminal
 *
 *@n: number of back slashes
 */
void print_diagonal(int n)
{
	int i;

	i = n;
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (i = 2; i <= n; i++)
			{
			_putchar(' ');
			}
			_putchar('\\');
                        _putchar('\n');
		}
	} else
	{
			_putchar('\n');
	}
}
