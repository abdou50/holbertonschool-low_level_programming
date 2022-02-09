#include <stdio.h>
#include "main.h"
/**
 * times_table - writes the character c to stdout
 */
void times_table(void)
{
	int v, i, k, l, h;

	for (i = 0; i <= 9; i++)
	{
		for (v = 0; v <= 9; v++)
		{
			k = v * i;
			l = k % 10;
			h = k / 10;
			if (k < 10 && v != 9)
			{
				_putchar(48 + k);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (k >= 10)
			{
				_putchar(48 + h);
				_putchar(48 + l);
				if (v != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + k);
			}
		}
		_putchar('\n');
	}
}
