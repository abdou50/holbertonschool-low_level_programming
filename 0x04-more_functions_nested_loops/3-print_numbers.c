#include <stdio.h>
#include "main.h"
/**
 * print_numbers - writes the character c to stdout
 *
 * Return: On success 1
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar ('0' + n);
	}
	_putchar('\n');
}
