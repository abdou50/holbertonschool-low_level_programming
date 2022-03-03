#include "main.h"
/**
 * _realloc - writes the character c to stdout
 * @ptr: The character to print
 * @old_size: old size
 * @new_size: new
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *k;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		k = malloc(new_size);
		if (k == NULL)
		{
			return (NULL);
		return (ptr);
		}
	}
	if (new_size > old_size)
{
	k = malloc(new_size);
	free(ptr);
	return (k);
}
	k = malloc(new_size);
	if (k == NULL)
		return (NULL);
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	return (ptr);
}
