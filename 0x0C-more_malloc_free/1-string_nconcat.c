#include "main.h"
/**
 * string_nconcat - writes the character c to stdout
 * @s1: The character to print
 * @s2: string
 * @n: isize
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = malloc(sizeof(s1) + n);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	for (k = 0; k < n; k++)
	{
		p[i] = s2[k];
		i++;
	}
	p[i] = '\0';
	return (p);
}
