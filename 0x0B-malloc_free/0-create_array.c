#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size);
	if (ptr == NULL)
		return (0);
	return (c);
}
