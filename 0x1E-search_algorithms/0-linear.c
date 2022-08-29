#include "search_algos.h"
/**
 * linear_search - function to search
 *
 * @array: array
 * @size: size
 * @value: value
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else if (array[i] != value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		else
			return (-1);
	}
	return (-1);
}
