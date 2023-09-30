#include "main.h"
/**
 * print_binary - prints the binary equivalent
 * of a decimal
 * @n: the decimal
 */
void print_binary(unsigned long int n)
{
	int is_one = 0, i;
	unsigned long int test = 1;

	if (n == 0)
	{
		printf("0");
	}

	for (i = 63; i >= 0; i--)
	{
		if (n & (test << i))
		{
			is_one = 1;
			printf("1");
		}
		else if (is_one)
		{
			printf("0");
		}
	}
}
