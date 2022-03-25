#include "main.h"
/**
 * binary_to_uint- convert from binary to integer
 * @b: the string to convert
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int result = 0;
	int count;
	unsigned int length;

	length = strlen(b);
	if (b == NULL)
	{
		return (0);
	}
	for (count = length - 1; count >= 0; count--)
	{
	if (b[count] != '0' && b[count] != '1')
	{
	return (0);
	}
	if (b[count] == '1')
	{
	result += (b[count] - '0')* k;
	}
	k *= 2;
	}
	return (result);
}
