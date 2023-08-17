#include "main.h"
/**
 * _abs - computes the absolute value of n
 *
 * @n: parameter whose absolute value
 *
 * Return: returns the absolute value of n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}

	return (-n);
}
