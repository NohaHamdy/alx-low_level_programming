#include "main.h"
/**
 *_pow_recursion - a function that returns the value of x power of y
 *@x: integer raised to a power
 *@y: value of power
 *Return: returns x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
