#include "main.h"
/**
 *is_prime_number -  function that returns 1 or 0
 *@n: number to be tested
 *Return: returns 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
/**
 *actual_prime -  function that returns 1 or 0
 *@n: number to be tested
 *@i: numbers helps in testing
 *Return: returns 1 or 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
