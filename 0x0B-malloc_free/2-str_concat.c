#include "main.h"
/**
 * *str_concat - writes the character c to stdout
 * @s1: count arguments
 * @s2: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, m, l;
	char *k;

	i = strlen(s1);
	j = strlen(s2);
	k = malloc(sizeof(char) * (i) + sizeof(char) * (j));
	if (k == NULL)
		return (NULL);
	for (l = 0 ; l < i; l++)
	{
	k[l] = s1[l];
	}
	k[i] = ' ';
	for (m = 0; m < j; m++)
	{
	k[i + m] = s2[m];
	}
	k[i + j] = '\0';
	return (k);
}
