#include "main.h"
#include <string.h>
/**
 * _strcmp - writes the character c to stdout
 * @s1: The character to print
 * @s2: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	int k, i, ls1, ls2;

	ls1 = strlen(s1);
	ls2 = strlen(s2);

for (i = 0; (i < ls1  && i < ls2 && s1[i] != '\0' && s2[i] != '\0'); i++)
k = s1[i] - s2[i];
return (k);
}
