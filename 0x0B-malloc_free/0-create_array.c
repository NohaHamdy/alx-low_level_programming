#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *create_array - a function that creates an array of chars
 *@size: size of the array
 *@c: character that array will be initialized with
 *Return: returns pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(*array) * size);
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
