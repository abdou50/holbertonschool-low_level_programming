#include "main.h"
/**
 * set_bit - function to set the bit
 * @n: integer;
 * @index:the index;
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= 1 << index;
	return (1);
}
