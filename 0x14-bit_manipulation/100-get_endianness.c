#include "main.h"
/**
 * get_endianness- check the endiant
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int get_endianness(void)
{
	int x = 1;
	char *y = (char *)&x;

	return ((int)*y);
}
