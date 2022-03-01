#include "main.h"
/**
 * *create_array - writes the character c to stdout
 * @size: size of a buffer
 * @c : the char that we wa,t to print
 *
 * Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int l;

	if (size == 0)
	{
		return (NULL);
	}
	k = malloc(sizeof(c) * size);
	if (k == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < size; l++)
	k[l] = c;
	return (k);
}
