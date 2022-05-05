#include "lists.h"
/**
 * get_dnodeint_at_index- get node at index.
 * @head: Pointer to next node.
 * @index: int
 * Return: nodes number.
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i != index; i++)
		head = head->next;
	if (i > index)
		return (NULL);
	return (head);
}
