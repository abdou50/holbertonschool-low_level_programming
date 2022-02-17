#include "main.h"
#include <string.h>
/**
 * *_strcat - writes the character c to stdout
 * @src: The character to print
 * @dest: the character to ptit
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	int k = strlen(dest);
	int i;

	for (i = 0; i <= k ; i++)
		dest[k + i] = src[i];
	return (dest);


}
