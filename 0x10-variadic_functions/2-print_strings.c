#include "variadic_functions.h"
/**
 * print_strings - writes the character c to stdout
 * @separator: The character to print
 * @n: the size of elements
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	x = va_arg(args, char *);
		if (i < n - 1 && separator != NULL)
		{
			if (x == NULL)
				printf("(nil)%c ", *separator);
			else
				printf("%s%c ", x, *separator);
		}
		else if (n < i && separator != NULL)
		{
			if (x == NULL)
				printf("(nil)");
			else
				printf("%s ", x);

		}
	}
	printf("\n");
	va_end(args);
}
