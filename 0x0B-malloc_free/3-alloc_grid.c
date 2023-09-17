#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a function that allocates memory for a grid
 * @width: the columns
 * @height: the rows
 * Return: returns a pointer
 */
int **alloc_grid(int width, int height)
{
	int **h, *w, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	h = (int **) malloc(height * sizeof(int));
	if (h == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		w = (int *) malloc(width * sizeof(int));
		if (w == NULL)
			return (NULL);
		*(h + i) = w;
		for (j = 0; j < width; j++)
		{
			h[i][j] = 0;
		}
	}
	return (h);
}
