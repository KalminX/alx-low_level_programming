#include "main.h"
/**
 * print_sign - print the sign of the number
 *
 * @n: the parameter to be checked
 *
 * Return: returns 0 if 0, - if negative, + if positive.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
}
