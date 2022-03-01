#include "main.h"
/**
 * _strdup - writes the character c to stdout
 * @str: count arguments
 *
 * Return: On success 1.
 */
char *_strdup(char *str)
{
char *k;
int i, l;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
	l++;
k = malloc(sizeof(char) * (i + 1));
if (k == NULL)
{
	return (NULL);
}
for (i = 0; s[i] ; l++)
{	
k[i] = str[i];
}
k[l] = '\0';
return (k);
}
