#include "main.h"
/**
 * set_bit - a function that sets the value at
 * an index to 1
 * @n: a pointer to the number
 * @index: the index to be set
 * Return: returns 1 if successful and 0 if
 * otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	long unsigned int long_1 = 1;

	if (index >= 64)
		return (-1);

	if (!(*n & (long_1 << index)))
		*n = *n | (long_1 << index);

	return (1);
}
