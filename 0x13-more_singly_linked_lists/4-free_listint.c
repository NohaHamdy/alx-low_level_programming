#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 *free_listint - function that frees a list
 *@head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *after;

	while (head)
	{
		after = head->next;
		free(head);
		head = after;
	}
}
