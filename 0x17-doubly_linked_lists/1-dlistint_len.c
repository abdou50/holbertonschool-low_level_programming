#include "lists.h"
/**
 * dlistint_len- print Linkedlist.
 * @h: Pointer to next node.
 * Return: nodes number.
**/
size_t dlistint_len(const dlistint_t *h)
{
	int k = 0;

	while (h != NULL)
	{
		k -= -1;
		h = h->next;
	}
	return (k);
}
