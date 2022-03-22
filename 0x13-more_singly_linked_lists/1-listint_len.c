#include "lists.h"
/**
 *listint_len- writes the character c to stdout
 * @h: The head
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t listint_len(const listint_t *h)
{
size_t length = 0;
while (h)
{
length++;
h = h->next;
}
return (length);
}
