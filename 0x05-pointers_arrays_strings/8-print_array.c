#include "main.h"
/**
 * print_array - writes the character c to stdout
 * @a: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1 ; i++)
	{
		if (i != n - 1)
		{
		printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
