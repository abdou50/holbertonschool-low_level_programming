#include <stdio.h>
#include "main.h"
/**
 * more_numbers - writes the character c to stdout
 * Return: On success 1
 */
void more_numbers(void)
{
int n, i;

for (i = 0; i <= 10; i++)
{
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
}
