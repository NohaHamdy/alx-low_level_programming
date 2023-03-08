#include "main.h"
/**
 *factorial - a function that returns the factorial of a given number
 *@n: an integer
 *Return: returns the factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
