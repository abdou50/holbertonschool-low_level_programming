#include "main.h"
/**
 * _calloc - writes the character c to stdout
 * @nmemb: The character to print
 * @size: int
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int  i, n;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;
	p = malloc(n);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		p[i] = 0;
	return (p);

}
