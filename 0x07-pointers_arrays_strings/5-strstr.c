#include "main.h"
/**
 *_strstr - a function that locates a substring
 *@haystack: first string
 *@needle: second string
 *Return: returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int n = 0;
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[n] == needle[i])
			{
				n++;
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
			} else
			{
				break;
			}

		}
		haystack++;
	}
	return (0);
}
