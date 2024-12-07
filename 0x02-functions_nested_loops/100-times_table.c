#include "main.h"
#include <stdio.h>

void print_times_table(int n)
{
	int i, j, k, product, product_copy, product_space;

	if (n > 15 || n < 0)
	{
	}
	else
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
					k = 1;
					product_copy = product;
					product_space = product;
					if (product_space >= 10 && product_space <= 100)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (product_space >= 100 && product_space <= 1000)
					{
						_putchar(' ');
					}
					while (product_copy >= 10)
					{
						k *= 10;
						product_copy /= 10;
					}
					while(product && (k >= 10))
					{
						_putchar(product/k + '0');
						product%=k;
						k/=10;
					}
					_putchar(product + '0');
					if (j != n)
						_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
