#include "lists.h"
/**
 *reverse_listint- writes the character c to stdout
 * @head: The head
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *hip;
	listint_t *hop;

	if (head == NULL)
		return (NULL);
	hop = NULL;
	while ((*head)->next != NULL)
	{
		hip = (*head)->next;
		(*head)->next = hop;
		hop = *head;
		*head = hip;
	}
	(*head)->next = hop;
return (*head);
}
