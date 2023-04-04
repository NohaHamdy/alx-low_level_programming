#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>
#include"lists.h"
/**
 *print_listint - function that prints all the elements of a listint_t list
 *@h: pointer to head of the list
 *Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t counter = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
