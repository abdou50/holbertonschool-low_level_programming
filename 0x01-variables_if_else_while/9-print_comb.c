#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int  main(void)
{
	char n = 'a';

	for (n = '0'; n <= '9'; n++)
	{
	putchar (n);
	if (n != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

