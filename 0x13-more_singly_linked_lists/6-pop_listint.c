#include "lists.h"
/**
 *pop_listint- writes the character c to stdout
 * @head: The head
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int pop_listint(listint_t **head)
{
	listint_t *rev;
	int result;

if (*head == NULL)
{
return (0);
}
rev = *head;
result = (*head)->n;
(*head) = (*head)->next;

free(rev);
return (result);
}
