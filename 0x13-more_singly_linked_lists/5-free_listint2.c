#include<stdlib.h>
#include<stdio.h>
#include"lists.h"
/**
 *free_listint2 - function that frees a list
 *@head: double pointer to head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *after;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		after = (*head)->next;
		free(*head);
		*head = after;
	}
	*head = NULL;
}
