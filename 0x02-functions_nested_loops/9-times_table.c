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
			if (k  >= 10)
			{
				_putchar(h + 48);
				_putchar(48 + l);
			}
			else
			{
				if (v > 0)
				{
					_putchar(' ');
				}
				_putchar(k + 48);
			}
		if (v != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
}
