#include "main.h"
/**
 * _strspn - writes the character c to stdout
 * @s: The character to print
 * @accept: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l, m;

	k = 0;
sh: 1: q: not found
	m = strlen(accept);
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < m; j++)
		{
		if (s[i] == accept[j])
		{
			k++;
		}
		}
	}
	return (k);
}
