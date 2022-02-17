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
int k, i, j;

k = strlen(s);
for (i = 1; i < k; i++)
{
j = i + 1;
if (s[i] == ',' || s[i] == ':' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == ' ')
{
if (s[j] >= 'a' && s[j] <= 'z')
s[j] = s[j] - 32;
}
}
if (s[0] >= 'a' &&  s[0] <= 'z')
{
s[0] = s[0] - 32;
}
return (s);
}
