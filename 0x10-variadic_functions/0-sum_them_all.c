#include "variadic_functions.h"
/**
 * sum_them_all - calculate the sum of a list of numbers
 * @n: the number of element to add
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int k = 0;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		k += va_arg(args, int);
	}
	va_end(args);
return (k);
}
