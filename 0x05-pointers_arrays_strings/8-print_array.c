#include <stdio.h>
#include "main.h"
/**
 * print_array - print n elements of an array of integer
 * @a: a pointer to an integer
 * @n: an integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
