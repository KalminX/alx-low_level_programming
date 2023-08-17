#include "main.h"
/**
 * print_last_digit - prints the last digit of the number n
 *
 * @n: the number whose last digit will be printed
 *
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = -n;
	}
	i = n % 10;
	if (i < 0)
	{
		i = -i;
	}
	_putchar('0' + i);
	return (i);
}
