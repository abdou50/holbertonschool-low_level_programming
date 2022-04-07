#include "lists.h"
/**
 *reverse_listint- writes the character c to stdout
 * @head: The head
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev = NULL;
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	(*head)->next = prev;
return (*head);
}
