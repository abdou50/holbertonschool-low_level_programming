#include <stdio.h>
#include "main.h"
/**
 * print_to_98- writes the character n to stdout
 * @n: The character to print
 *
 * Return: On success 1
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i <= 98; i++)
		{
		if (i != 98)
		{
		printf("%d, ", i);
		}
		else
		printf("%d", i);
		}
	}
	else if (n >= 98)
	{
		for (i = n ; i >= 98; i--)
		{
			if (i != 98)
			{
			printf("%d, ", i);
			}
			else
			printf("%d", i);
		}
	}
	else
		printf("%d", n);
	printf("\n");
}
