#include "main.h"
/**
 * print_space - A function that prints space
 * @product: An integer representing the product of two numbers.
 */
void print_space(int product)
{
	if (product >= 10 && product < 100)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else if (product >= 100 && product < 1000)
	{
		_putchar(' ');
	}
}

/**
 * print_number_greater_than_10 - A function that checks if number > 10
 * @product: the product which will be checked
 */
void print_number_greater_than_10(int product)
{
	int k, product_copy, product_space;

	k = 1;
	product_copy = product;
	product_space = product;
	while (product_copy >= 10)
	{
		k *= 10;
		product_copy /= 10;
	}
	while ((product_space / k) && (k >= 10))
	{
		_putchar(product / k + '0');
		product %= k;
		k /= 10;
	}
	_putchar(product + '0');
}

/**
 * print_times_table - A function that prints the timestable of an integer
 * @n: n is an integer whose timetable will be formed
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (product < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(product + '0');
					if (j != n)
						_putchar(',');
				}
				else if (product >= 10)
				{
					print_space(product);
					print_number_greater_than_10(product);
					if (j != n)
						_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
