#include "lists.h"
/**
 * list_len - writes the character c to stdout
 * @h: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t list_len(const list_t *h)
{
size_t length = 0;
while (h)
{
length++;
h = h->next;
}
return (length);
}
