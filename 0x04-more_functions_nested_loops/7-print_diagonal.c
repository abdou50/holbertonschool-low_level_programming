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
        int k;

        if (n <= 0)
                _putchar('\n');
        else
        {
                for (k = 0; k <= n; k++)
                {
                        _putchar("'\'");
			j = k - 1;
			while ( j < k)
			{
				_putchar(' ');
				j++;
			}
			_putchar(' ');
                }
        }
        _putchar('\n');
}
