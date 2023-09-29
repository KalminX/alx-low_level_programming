#include "main.h"
/**
 * print_binary - prints the binary equivalent
 * of a decimal
 * @n: the decimal
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 8 * 2, is_one = 0;

	if (n == 0)
	{
		printf("0");
	}

	for (i = 31; i >= 0; i--)
	{
		if (n & (1 << i))
		{
			is_one = 1;
			printf("1");
		}
		if (is_one && !(n & (1 << i)))
		{
			printf("0");
		}
	}
}
