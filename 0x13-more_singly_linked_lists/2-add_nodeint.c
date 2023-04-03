#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 *add_nodeint - function that adds a new node at the beginning of a list
 *@head: double pointer to head of the list
 *@n: data of the new node
 *Return: returns the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	} else
	{
		new_node->next = temp;
		*head  = new_node;
	}
	return (new_node);
}
