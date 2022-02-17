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
int i, k;

k = strlen(s);
for (i = 0; i < k; i++)
{
if (s[i] == 'A' || s[i] == 'a')
{
s[i] = '4';
}
else if (s[i] == 'E' || s[i] == 'e')
{
s[i] = '3';
}
else if (s[i] == 'O' || s[i] == 'o')
{
s[i] = '0';
}
else if (s[i] == 'T' || s[i] == 't')
{
s[i] = '7';
}
else if (s[i] == 'T' || s[i] == 't')
{
s[i] = '1';
}
}
return (s);
}

