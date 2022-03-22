#include "lists.h"
/**
 *sum_listint- calculate the some of all the integerb node in a linked list
 * @head: The head
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sum_listint(listint_t *head)
{
	int k = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		k += head->n;
		head = head->next;
	}
return (k);
}
