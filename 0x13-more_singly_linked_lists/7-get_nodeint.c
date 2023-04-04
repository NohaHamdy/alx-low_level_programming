#include<stdio.h>
#include"lists.h"
/**
 *get_nodeint_at_index - function that returns the nth node
 *of a listint_t linked list
 *@head: a pointer to the head of the list
 *@index: index of the node to be returned
 *Return: a pointer to the node of the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (temp)
	{
		if (index == counter)
		{
			return (temp);
		}
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
