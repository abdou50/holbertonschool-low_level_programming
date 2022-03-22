#include "lists.h"
/**
 *print_listint- writes the character c to stdout
 * @h: The head
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_listint(const listint_t *h)
{
size_t length = 0;
while (h)
{
printf("%d\n", h->n);
length++;
h = h->next;
}
return (length);
}
