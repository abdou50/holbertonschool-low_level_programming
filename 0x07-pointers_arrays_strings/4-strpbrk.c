#include "main.h"
/**
 * _strpbrk - writes the character c to stdout
 * @s: The character to print
 * @accept: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, n, l, k;

	k = strlen(s);
	l = strlen(accept);
	for (i = 0; i < k ; i++)
	{
		j = 0;
		while (s[i] != accept[j] && j <= l)
		{
			j++;
		}
	}
	if (j < l)
	{
		for (n = 0; n < j -2; n++)
		{
			s++;
		}
		return (s);
		j = l;
	}
	else
		return (NULL);
}
