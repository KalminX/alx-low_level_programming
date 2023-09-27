#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int diff, i;

	diff = max - min;
	if (min > max)
		return (NULL);

	ptr = malloc((dif + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < diff; i++)
	{
		ptr[i] = min + 1;
	}
	return (ptr);
}
