#include "main.h"
#include <string.h>
/**
* rev_string  - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
	int i;
	int k;
	int n = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		n++;
	}

	for (i = n; i >= 0; i--)
	{
		_putchar (s[i]);
	}

}
