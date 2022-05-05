#include "lists.h"
/**
 * print_dlistint- print Linkedlist.
 * @h: Pointer to next node.
 * Return: nodes number.
**/
size_t print_dlistint(const dlistint_t *h)
{
	int k = 0;

	while (h != NULL)
	{
		k++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (k);
}
