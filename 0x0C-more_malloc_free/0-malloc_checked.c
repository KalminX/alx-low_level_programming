#include "main.h"
/**
 * malloc_checked - checks the return of a malloc func
 * @b: the input
 * Return: returns the pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
