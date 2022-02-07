#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int  main(void)
{
	int a;
	int b;

	for (a = '0' ; a != '9' ; a++)
	{
		for (b = a + 1 ; b <= '9' ; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
			if (a + b != 113)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
