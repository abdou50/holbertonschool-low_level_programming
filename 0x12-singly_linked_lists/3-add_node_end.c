#include "lists.h"
/**
 * add_node_end- writes the character c to stdout
 * @head: The head
 * @str: the string to duplicate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *end;

	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
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
