#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 *delete_nodeint_at_index - a function that deletes the
 *node at index of a linked list
 *@head: double pointer to head of the list
 *@index: is the index of the node that should be deleted
 *Return: returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp = *head;
	listint_t *delete;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp && temp->next && counter < index)
	{
		if (counter == index - 1)
		{
			delete = temp->next;
			temp->next = delete->next;
			free(delete);
			return (1);
		}
		temp = temp->next;
		counter++;
	}
	return (-1);
}
