#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - print the number in a line
 * @separator: between each number
 * @n: number of element
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	if (n == 0)
	{
		printf("\n");
		exit(0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (i < n - 1 && separator != NULL)
			printf("%d%s", x, separator);
		else
			printf("%d", x);
	}
	printf("\n");
	va_end(args);
}
