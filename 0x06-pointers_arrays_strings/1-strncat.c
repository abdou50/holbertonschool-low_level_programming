#include "main.h"
#include <string.h>
/**
 * _strncpy - writes the character c to stdout
 * @dest: The character to print
 * @src: the string
 * @n : size of
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = strlen(dest);
	int i;

	for (i = 0; i < n ; i++)
	{
		while (src[i] != '\0')
		{
		dest[i + k] = src[i];
		}
	}
	dest[i++] = '\0';
	return (dest);
}
