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
	int i, k, j, n, l;

	l = strlen(accept);
	k = strlen(s);
	for (i = 0; i < k; i++)
	{
		j = 0;
		while (s[i] != accept[j] && j <= l)
		{
			j++;
		}
	}
	if (j < l)
	{
		n = 0;
		while (n < j - 2)
		{
			s++;
			n++;
		}
		return (s);
		j = l;
	}
	else
		return (NULL);
}
