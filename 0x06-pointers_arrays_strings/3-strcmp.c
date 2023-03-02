#include "main.h"
/**
 *_strcmp - a function that compares two strings
 *@s1: first string
 *@s2: second string
 *Return: returns difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r;

	while (s1[i] != 0)
	{
		r = s1[i] - s2[i];
		if (r == 0)
		{
			i++;
		} else
		{
			break;
		}
	}
	return (r);
}
