#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include"lists.h"
/**
 *listint_len - function that returns the number of elements in a linked list
 *@h: pointer to head of the list
 *Return: returns number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t counter = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}
