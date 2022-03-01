#include "main.h"
/**
 * free_grid - writes the character c to stdout
 * @grid: count arguments
 * @height: int
 *
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
	free(grid[i]);
free(grid);
}
