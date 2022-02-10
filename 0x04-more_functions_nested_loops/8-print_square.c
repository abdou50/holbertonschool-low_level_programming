#include <stdio.h>
#include "main.h"
/**
 * print_square- writes the character c to stdout
 * @size: The character to print
 *
 * Return: On success 1
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = 0; j <= size ; i++)
			{
				_putchar('#');
			}
			putchar('\n');
		}
	}
	else
	_putchar('\n');
}