#include "main.h"
/**
 * get_bit - checks if the bit of a numher at
 * a particular index is set or not
 * @n: the number
 * @index: the index
 * Return: returns 0 or 1 if its either
 * and -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int long_1 = 1;

	if (n == 0)
		return (0);

	if (index >= 63)
		return (-1);

	if (n & (long_1 << index))
		return (1);
	else
		return (0);
}
