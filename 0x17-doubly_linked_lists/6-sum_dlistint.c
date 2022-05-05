#include "lists.h"
/**
 * sum_dlistint- calculate the sum of the nodes.
 * @head: Pointer to next node.
 * Return: sum.
**/
int sum_dlistint(dlistint_t *head)
{
	int somme = 0;

	while (head != NULL)
	{
		somme += head->n;
		head = head->next;
	}
	return (somme);
}
