#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 *pop_listint - function that deletes the head node of a linked list
 *@head: double pointer to head of the list
 *Return: returns the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *after = *head;
	int head_data;

	if (head == NULL)
	{
		return (0);
	}
	head_data = (*head)->n;
	after = after->next;
	free(*head);
	(*head) = after;
	return (head_data);
}
