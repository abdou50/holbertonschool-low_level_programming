#include <stdio.h>
#include "main.h"
/**
 *print_most_number- writes the character c to stdout
 * @c: The character to print
 *
 * Return: On 
 *
 */
void print_most_number(void)
{
int n;

for (n = 0; n <= 9; n++)
{
	if (n != 4 && n != 2)
	{
	_putchar ('0' + n);
	}
}
_putchar('\n');
}

