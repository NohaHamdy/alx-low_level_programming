#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 *insert_nodeint_at_index - function that inserts a
 * new node at a given position
 *@head: double pointer to head of the list
 *@idx: index of the list where new node should be added
 *@n: new node's data
 *Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int counter = 0;
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	while (temp && counter < idx)
	{
		if (counter == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
