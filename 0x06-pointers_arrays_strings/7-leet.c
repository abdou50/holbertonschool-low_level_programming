#include "main.h"
#include <string.h>
/**
 *leet - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *leet(char *s)
{
int i, k, c;
char ar[100];

k = strlen(s);
for (i = 0; i < k; i++)
{
if (s[i] == 'a' || s[i] == 'A')
{
ar[i] = '4';
}
else if (s[i] == 'e' || s[i] == 'E')
{
ar[i] = '3';
}
else if (s[i] == 'o' || s[i] == 'O')
{
ar[i] = '0';
}
else if (s[i] == 't' || s[i] == 'T')
{
ar[i] = '7';
}
else if (s[i] == 'l' || s[i] == 'L')
{
ar[i] = '4';
}
else
{
ar[i] = s[i];
}
}
for (c = 0; c < k; c++)
{
s[c] = ar[c];
}
_putchar('\n');
return (s);
}
