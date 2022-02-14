#include "main.h"
#include <string.h>
/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 */
int _strlen(char *s)
{
	int k = 0;
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		k++;
	}
	return (k);
}
