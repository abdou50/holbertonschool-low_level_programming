#include "main.h"
/**
 * leet - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *leet(char *s)
{
int i, j, k, l;
char ar[] = {'O', 'L', ' ', 'E', 'A', ' ', ' ', 'T'};

k = strlen(s);
j = strlen(ar);
for (i = 0; i < k; i++)
{
for (l = 0; l < j; l++)
if (s[i] == ar[l] || s[i] - 32 || ar[l] || s[i] || ar[l] - 32)
{
	s[i] = l;
}
}
return (s);
}
