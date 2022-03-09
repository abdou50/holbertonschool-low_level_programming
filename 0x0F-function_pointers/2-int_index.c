#include "function_pointers.h"
/**
 * int_index - writes the character c to stdout
 * @array: The character to print
 * @size: the size
 * @cmp: function
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL || cmp != NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
return (-1);
}
