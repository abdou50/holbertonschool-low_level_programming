#include <stdio.h>
#include "main.h"
/**
 * print_diagonal- writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
