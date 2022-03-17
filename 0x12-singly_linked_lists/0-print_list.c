
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print Linkedlist.
 * @h: Pointer to next node.
 * Return: nodes number.
**/
size_t print_list(const list_t *h)
{
unsigned int  i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
return (i);
}
