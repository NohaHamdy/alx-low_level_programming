#include "main.h"
#include <stdio.h>
/**
 *rot13 - a function that encodes a string using rot13
 *@n: a string to be encoded
 *Return: returns to pointer
 */
char *rot13(char *n)
{
	int i;

	while (n[i] != '\0')
	{
		printf("Inside first while loop\n");
		while ((n[i] >= 'a' && n[i] <= 'z') || (n[i] >= 'A' && n[i] <= 'Z'))
		{
			printf("Inside second while loop\n");
			if ((n[i] >= 'a' && n[i] <= 'm') || (n[i] >= 'A' && n[i] <= 'M'))
			{
				n[i] += 13;
				printf("Inside if\n");
			} else
			{
				n[i] -= 13;
				printf("Inside else\n");
			}
			i++;
		}
		i++;
	}
	return (n);
}
