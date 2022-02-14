#include "main.h"
/**
 * puts2 - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
	int k;
	int i;
	int j;

	k = 0;
for (i = 0 ; str[i] != '\0'; i++)
{
	k++;
}
for (j = 0 ; j <= (k -1); j++)
{
	_putchar(str[j]);
	j++;
}
_putchar('\n');
}
