#include "main.h"
/**
 * prime - writes the character c to stdout
 * @n: The character to print
 * @i : int;
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime(int  n,int i)
{
	if (n <= 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime(n, i + 1));
}
/**
 * is_prime_number - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}

