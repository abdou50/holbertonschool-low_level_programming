#include "main.h"
/**
 * prime - writes the character c to stdout
 * @n: le nombre pour la division
 * @i: diviseur
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime(int n, int i)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (prime(n, i + 1));
}
/**
 * _sqrt_recursion- find if a number have a sqrt or not
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (prime(n, 1));
}
