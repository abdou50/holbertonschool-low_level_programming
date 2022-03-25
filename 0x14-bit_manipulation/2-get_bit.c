#include "main.h"
/**
 * get_bit- get the bit at a specific index
 *
 * @n: the binary number
 * @index: the index to check
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
