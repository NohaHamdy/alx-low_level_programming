#include "main.h"
/**
 *_strlen - a function that returns the length of a string.
 *@s: the string
 *Return: retyrns the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; ++i)
	{
		s++;
	}
	return (i);
}
