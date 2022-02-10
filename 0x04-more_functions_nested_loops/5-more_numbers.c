#include <stdio.h>
#include "main.h"
/**
 * print_numbers - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 */
void print_numbers(void)
{
int n;

for (n = 0; n <= 14; n++)
{
	if (n > 9)
	{
	_putchar ((n / 10) + '0');
	}
	_putchar ((n % 10) + '0');
}
_putchar('\n');
}
