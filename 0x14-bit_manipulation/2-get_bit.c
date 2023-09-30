#include "main.h"
/**
 * get_bit - checks if the bit of a numher at
 * a particular index is set or not
 * @n: the number
 * @i: the index
 * Return: returns 0 or 1 if its either
 * and -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n >> index) == 0)
		return (-1);

	if (n & (1 << index))
		return (1);
	else
		return (0);
}
