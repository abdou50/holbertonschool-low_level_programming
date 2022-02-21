#include "main.h"
/**
 * _strchr - writes the character c to stdout
 * @c: The character to print
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	int i, k;

	k = strlen(s);
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}

}
