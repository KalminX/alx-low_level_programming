#include "main.h"
/**
 * flip_bits - counts the number of bits to be
 * flipped to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: returns the count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int num = n ^ m;

	while (num)
	{
		num = num & (num - 1);
		count += 1;
	}
	return (count);
}
