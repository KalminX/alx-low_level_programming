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
	int **h, *w, i = 0;

	h = (int **) malloc(height * sizeof(int));
	if (h == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		w = (int *) malloc(width * sizeof(int));
		if (w == NULL)
			return (NULL);
		*(h + i) = w;
	}
	return (h);
}
