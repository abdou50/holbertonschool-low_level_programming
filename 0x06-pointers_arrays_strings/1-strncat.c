#include "main.h"
#include <string.h>
/**
 * _strncat - writes the character c to stdout
 * @dest: The character to print
 * @src: the string
 * @n : size of int
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int i;

	k = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + k] = src[i];
	}
	dest[i + k] = '\0';
	return (dest);
}
