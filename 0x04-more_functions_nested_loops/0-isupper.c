#include "main.h"
/**
 *_isupper - a function that checks for uppercase character.
 *@c: parameter to be printed
 *Return: returns 0 and 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
