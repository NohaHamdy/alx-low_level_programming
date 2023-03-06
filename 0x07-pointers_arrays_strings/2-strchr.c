#include "main.h"
#include <stddef.h>
/**
 *_strchr - a function that locates a character in a string
 *@s: a string
 *@c: a character
 *Return: Returns a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		} else if (s[i] == '\0')
		{
			break;
			return (NULL);
		}
	}
	return (s + i);
}
