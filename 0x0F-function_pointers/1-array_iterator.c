#include"function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 *@array: a pointer to the array
 *@size: size of the array
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i <= size; i++)
	{
		(*action)(array[i]);
	}
}
