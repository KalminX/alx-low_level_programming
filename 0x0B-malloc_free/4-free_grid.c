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
	
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
