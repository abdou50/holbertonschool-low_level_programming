#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint- add node at the head.
 * @head: Pointer to next node.
 * @n: int
 * Return: nodes number.
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;
	if (*head != NULL)
	{
	(*head)->prev = temp;
	}
	*head = temp;
	return (temp);
}
