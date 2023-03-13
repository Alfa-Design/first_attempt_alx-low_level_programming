#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimentional array of integers.
 * @grid: The 2-dimentional array of integers to be freed
 * @height: The height of grip.
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
