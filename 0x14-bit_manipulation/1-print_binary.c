#include "main.h"
/**
 * print_binary- convert from binary to integer
 * @n: the string to convert
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar ((n & 1) + '0');
}
