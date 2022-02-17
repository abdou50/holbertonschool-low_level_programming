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

	if (n % 2 == 0)
	{
	while (i != n - 1)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
		i++;
	}
	}
	else
	{
		k = n / 2;
		while (k != i && k != n)
		{
			tmp = a[i];
			a[i] = a[n - 1];
			a[n - 1] = tmp;
			n--;
			i++;
		}
	}
}
