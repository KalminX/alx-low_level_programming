#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array using
 * memory from the heap
 * @size: the size in bytes allocated
 * @c: the pointer to the allocated
 * memory
 * Return: returns NULL if size is 0
 * and returns the pointer if successful
 */
char *create_array(unsigned int size, char c)
{
	char *c;

	if (size == 0)
		return (NULL);

	c = (char *) malloc(size);
	if (*c == NULL)
		return (0);
	return (c);
}
