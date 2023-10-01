#include "main.h"
/**
 * clear_bit - unsets the bit at a particular
 * index
 * @n: a pointer to the digit
 * @index: the index of the digit
 * Return: returns 1 id successful and
 * -1 if unsuccessful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int long_1 = 1;

	if (index >= 63)
		return (-1);

	if (*n == 0)
		return (1);

	if (*n & (long_1 << index))
		*n = *n ^ (long_1 << index);

	return (1);
}
