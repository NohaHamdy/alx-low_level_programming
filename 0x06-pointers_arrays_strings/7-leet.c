#include "main.h"
/**
 *leet - a function that encodes a string into 1337
 *@n: string to be encoded
 *Return: returns a pointer
 */
char *leet(char *n)
{
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int i = 0;
	int j;

	while (n[i] != '\0')
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
		i++;
	}
	return (n);
}
