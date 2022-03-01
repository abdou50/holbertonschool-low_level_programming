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
i = strlen(str);
if (str == NULL)
	return (NULL);
k = malloc(sizeof(char) * i);
if (k == NULL)
	return (NULL);
for (l = 0; l < i ; l++)
{
	k[l] = str[l];
}
k[i] = '\0';
return (k);
}
