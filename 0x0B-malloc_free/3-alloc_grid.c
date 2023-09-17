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
	int **h, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	h = (int **) malloc(height * sizeof(int *));
	if (h == NULL)
	{
		free(h);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		h[i] = (int *) malloc(width * sizeof(int));
		if (h[i] == NULL)
		{
			free(h[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			h[i][j] = 0;
		}
	}
	return (h);
}
