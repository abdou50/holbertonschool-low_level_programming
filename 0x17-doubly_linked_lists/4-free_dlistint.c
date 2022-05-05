#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint- writes the character c to stdout
 * @head: The head
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ops;

while (head != NULL)
{
ops = head->next;
free(head);
head = ops;
}
}
