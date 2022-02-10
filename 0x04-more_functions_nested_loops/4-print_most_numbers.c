#include <stdio.h>
#include "main.h"
/**
 *print_most_numbers- writes the character c to stdout
 *
 */
void print_most_numbers(void)
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

