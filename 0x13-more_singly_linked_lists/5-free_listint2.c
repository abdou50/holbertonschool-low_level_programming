#include "lists.h"
/**
 * free_listint2- writes the character c to stdout
 * @head: The head
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_listint2(listint_t **head)
{
	listint_t *ops;
if (head == NULL)
	return;
while (*head)
{
ops = (*head)->next;
free(*head);
*head = ops;
}
*head = NULL;
}
