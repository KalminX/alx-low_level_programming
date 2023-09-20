#include <stdlib.h>
/**
 * free_grid - a function that frees the grid created
 * by alloc_grid
 * @grid: the grid to be freed
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;
	
	if (grid == NULL || height <= 0)
		return (-1);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
