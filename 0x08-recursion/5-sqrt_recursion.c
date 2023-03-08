#include "main.h"
/**
 *_sqrt_recursion - a function that returns the natural square root of a number
 *@n: an integer
 *Return: returns natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (my_sqrt(n, 0));
}
/**
 *my_sqrt - a function that returns the actual square root of a number
 *@n: an integer
 *@i: the root
 *Return: returns actual square root
 */
int my_sqrt(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	} else if ((i * i) == n)
	{
		return (i);
	}
	return (my_sqrt(n, i + 1));

}
