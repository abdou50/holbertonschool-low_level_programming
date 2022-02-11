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

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
	
