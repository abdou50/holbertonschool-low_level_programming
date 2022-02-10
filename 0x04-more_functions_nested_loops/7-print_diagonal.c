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
        int k, l;

        if (n < 0)
	{
                _putchar('\n');
	}
        else
        {
                for (k = 1; k <= n; k++)
                {
                   for (l = 1; l < k; l++)
		   {
			   _putchar(' ');
		   }
			   _putchar('\\');
			   _putchar('\n');
		}
		_putchar('\n');
	}
}
