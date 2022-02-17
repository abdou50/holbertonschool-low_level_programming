#include "main.h"
/**
 *reverse_array - writes the character c to stdout
 * @a: The character to print
 * @n : the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;
	int k;

	k = 0;
	for (i = n - 1; i >= n / 2; i--)
	{
		if (i > k)
		{
		tmp = a[i];
		a[i] = a[k];
		a[k] = tmp;
		}
		k++;
	}
}
