#include "lists.h"
/**
 * add_nodeint - writes the character c to stdout
 * @head: The head
 * @n: int
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
