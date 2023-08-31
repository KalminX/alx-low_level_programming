#include "main.h"
/**
 * _pow_recursion - replicating the power function using recursion
 * @x: the base number
 * @y: the exponent
 * Return: returns the result of the exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 1)
		{
			return (x);
		}
		else if (y == 0)
		{
			return (1);
		}
		else if (y > 1)
		{
			return (x * _pow_recursion(x, (y - 1)));
		}
	}
}
