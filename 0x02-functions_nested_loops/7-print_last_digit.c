#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 *  print_last_digit - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1
 */
	int print_last_digit(int n)
{
	int  l;

	l = n % 10;
	if (l < 0)
	l = abs(l);
	_putchar('0' + l);
	return (l);
}
