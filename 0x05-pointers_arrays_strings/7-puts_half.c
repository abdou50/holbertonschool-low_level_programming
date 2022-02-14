#include "main.h"
/**
 * puts_half - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
	int k;
	int i;

k = 0;
for (i = 0 ; str[i] != '\0'; i++)
{
	k++;
}
for (i = ( (k) / 2) ; i <= k - 1 ; i++)
{
	_putchar(str[i]);

}
_putchar('\n');
}

