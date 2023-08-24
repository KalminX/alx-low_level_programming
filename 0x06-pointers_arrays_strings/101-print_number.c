#include "main.h"
/**
 * print_number - a function that
 * prints an integer without using the standard library
 * @n: the integer to be printed
 */
void print_number(int n)
{
	int digit = 0, div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while ((n / div) >= 10)
	{
		div = div * 10;
	}

	while (div > 0)
	{
		digit = n / div;
		_putchar('0' + digit);
		digit = n % div;
		div = div / 10;
	}
}
