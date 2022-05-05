#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint- print Linkedlist.
 * @head: Pointer to next node.
 * @n: the node number
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
	temp->next = NULL;
	if (*head == NULL)
	{
		return (NULL);
	}
	(*head)->prev = temp;
	temp->next = *head;
	*head = temp;
	return (*head);
}
