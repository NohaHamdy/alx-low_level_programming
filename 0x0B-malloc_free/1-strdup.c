#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - a function that returns a pointer to a
 *newly allocated space in memory, which contains a copy of
 *the string given as a parameter.
 *@str: the new string.
 *Return: returns a pointer .
 */
char *_strdup(char *str)
{
	char *new;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (new == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		new[r] = str[r];
	return (new);
}
