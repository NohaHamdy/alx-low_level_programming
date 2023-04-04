#include<stdio.h>
#include"lists.h"
/**
 *sum_listint - function that returns the sum of all
 *the data(n) of a linked list
 *@head: pointer to the head of the list
 *Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
