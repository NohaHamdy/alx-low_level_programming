#include "main.h"
/**
 *_strncat - a function that concatenates two strings
 *@dest: first string
 *@src: second string
 *@n: number of characters
 *Return: returns a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int LD = 0;
	int LS = 0;
	int i;

	while (dest[LD] != '\0')
	{
		LD++;
		if (dest[LD] == '\0')
		{
			for (i = 0; i < n; i++)
			{
				dest[LD] = src[LS];
				LS++;
				LD++;
			}
			break;
		}
	}
	return (dest);
}
