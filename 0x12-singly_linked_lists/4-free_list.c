#include "lists.h"
/**
 * free_list- writes the character c to stdout
 * @head: The head
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_list(list_t *head)
{
	list_t *ops;

while (head != NULL)
{
ops = head->next;
free(head->str);
free(head);
head = ops;
}
}
