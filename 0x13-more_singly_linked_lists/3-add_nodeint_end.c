#include "lists.h"
/**
 * add_nodeint_end- writes the character c to stdout
 * @head: The head
 * @n: inte
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *end;

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;

	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = ptr;
	}
	return (*head);
}
