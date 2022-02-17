#include "main.h"
#include <string.h>
/**
 * cap_string - writes the character c to stdout
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *s)
{
int k, i, j, l, m;
char s1[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '	', ' ', '\n'};

k = strlen(s);
j = strlen(s1);
for (i = 1; i < k; i++)
{
for (m = 0; m < j; m++)
{
if (s[i] == s1[m])
{
l = i + 1;
}
if (s[l] >= 'a' && s[l] <= 'z')
{
s[l] = s[l] - 32;
}
}
}
if (s[0] >= 'a' &&  s[0] <= 'z')
{
s[0] = s[0] - 32;
}
return (s);
}
