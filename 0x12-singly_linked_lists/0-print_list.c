#include "lists.h"
/**
 * print_list - print the element in a specific list
 * @h: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_list(const list_t *h)
{
size_t n = 0;

while (h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	n++;
	h = h->next;
}
return (n);
}
