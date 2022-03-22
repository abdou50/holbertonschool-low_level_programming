#include "lists.h"
/**
 *get_nodeint_at_index- writes the character c to stdout
 * @head: The head
 * @index: the index
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

while (count < index)
{
if (head == NULL)
{
return (0);
}
count++;
current = current->next;
}
return (head);
}
