#include "search_algos.h"
/**
 * binary_search - function to search
 *
 * @array: array
 * @size: size
 * @value: value
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, i = 0;
	size_t high = size - 1;
	size_t mid;

	if (!array)
		return (-1);
	while (low < high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("\n");
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
