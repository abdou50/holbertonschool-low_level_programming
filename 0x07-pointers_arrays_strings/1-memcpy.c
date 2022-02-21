#include "main.h"
/**
 * _memcpy - writes the character c to stdout
 * @src: string
 * @dest: string destition
 * @n : unsigned int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
