#include "main.h"
/**
 * array_range - writes the character c to stdout
 * @min: The character to print
 * @max: int
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * min + sizeof(int) * max);
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
	p[i] = min;
	min++;
	i++;
	}
	return (p);


}
