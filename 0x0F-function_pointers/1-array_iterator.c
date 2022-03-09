#include "function_pointers.h"
/**
 * array_iterator - writes the character c to stdout
 * @array: The character to print
 * @size: size of array
 * @action: functin
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
