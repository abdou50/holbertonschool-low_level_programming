#include "main.h"
/**
 * _memset - writes the character c to stdout
 * @s: The character to print
 * @b: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int  i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
