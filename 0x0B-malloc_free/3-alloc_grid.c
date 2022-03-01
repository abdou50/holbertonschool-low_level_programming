#include "main.h"
/**
 * **alloc_grid- writes the character c to stdout
 * @width: count arguments
 * @height: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j, l;
	int **k;

	if (width <= 0 || height <= 0)
		return (NULL);

	k = malloc(sizeof(int *) * height);

	if (k == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		k[i] = malloc(sizeof(int) * width);

		if (k[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(k[j]);
			}

			free(k);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (l = 0; l < width; l++)
		{
			k[i][l] = 0;
		}
	}

	return (k);
}
