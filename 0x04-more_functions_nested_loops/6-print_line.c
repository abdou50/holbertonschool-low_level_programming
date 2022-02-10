#include <stdio.h>
#include "main.h"
/**
 * print_line- writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1
 */
void print_line(int n)
{
	int k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (k = 0; k <= n; k++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
