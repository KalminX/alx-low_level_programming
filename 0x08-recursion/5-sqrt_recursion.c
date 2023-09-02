#include "main.h"
int sqrt_natural_number(int n, int i);
/**
 * _sqrt_recursion - mimics the normal sqrt
 * command using sqrt
 * @n: the number whose sqrt is to be found
 * Return: returns the sqrt of the number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_natural_number(n, 0));
}

/**
 * sqrt_natural_number - a function that
 * calculates the sqrt of a natural number
 * @n: the number whose sqrt
 * is to be calculated
 * @i: the iterator
 * Return: returns the natural sqrt of a number
 */
int sqrt_natural_number(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_natural_number(n, i + 1));
}
