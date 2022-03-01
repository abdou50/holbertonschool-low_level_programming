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
int k, i, j;
int s = 0;
int l = 0;
char *pit;
if (s1 != NULL)
	s = strlen(s1);
if (s2 != NULL)
{
	l = strlen(s2);
}
	pit = malloc(sizeof(char) * ((s + l) + 1));
		if (pit == NULL)
			return (NULL);
	for (i = 0; i < s; i++)
	{
		pit[i] = s1[i];
	}
	k = s - 1;
	for (j = 0; j < l; j++)
	{
		k++;
		pit[k] = s2[j];
	}
	return (pit);
}

