#include "main.h"
/**
 *_strcat - a function that concatenates two strings
 *@dest: first string
 *@src: second string
 *Return: returns a pointer
 */
char *_strcat(char *dest, char *src)
{
	int LD = 0;
	int LS = 0;

	while (dest[LD] != '\0')
	{
		LD++;
		if (dest[LD] == '\0')
		{
			while (src[LS] != '\0')
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
