#include<stddef.h>
#include<stdio.h>
#include"lists.h"
/**
 *detect_loop - function that detects if a list has a loop
 *@head: pointer to head of the list
 *Return: return 1 if there is a loop and 0 if not
 */
int detect_loop(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("There is a loop");
			return (1);
		}
	}
	printf("There is not a loop");
	return (0);
}
/**
 *count_nodes_of_loop - function to count number of nodes in the loop
 *head_loop: pointer to first node in the loop
 *Return: number of nodes in the loop
 */
/**size_t count_nodes_of_loop(const listint_t *head_loop)
*{
*}
*/
/**
 *print_listint_safe - function that prints a linked list
 *@head: pointer to head of the list
 *Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	int detect_result = 0;

	if (head == NULL)
	{
		return (98);
	}
	while (head != NULL)
	{
		detect_result = detect_loop(head);
		printf("%d", detect_result);
		/**if (detect_loop == 1)
		*{
		*	count_nodes_of_loop();
		*}
		*printf("[%p]%d\n", (void *)head, head->n);
		*head = head->next;
		*counter++;
		*/
	}
	return (counter);
}
