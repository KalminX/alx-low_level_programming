#include <stdio.h>

/**
 * main - check for sign of a number
 *
 * Return: 0 if successful
 *
 * @n: number to be checked
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
}
