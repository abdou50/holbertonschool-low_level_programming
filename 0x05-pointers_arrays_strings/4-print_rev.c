#include "main.h"
#include <string.h>
/**
 * print_rev - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int i, n, k;

	k = 0;
	for (n = 0; s[n] != '\0'; n++)
	{
		k++;
	}

	for (i = k; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
