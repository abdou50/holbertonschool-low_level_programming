#include "main.h"
/**
 *swap_int - writes the character c to stdout
 * @b: The character to print
 * @a: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
