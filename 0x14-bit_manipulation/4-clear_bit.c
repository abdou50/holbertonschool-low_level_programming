#include "main.h"
/**
 * clear_bit - clear bit and sets it to zero
 *
 * @n : integer
 * @index : the index
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index == 0)
		return (-1);
*n &= ~(1 << index);
return (1);
}
