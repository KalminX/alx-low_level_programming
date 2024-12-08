#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints out the fibonacci
 * sequence.
 * Return: Returns 0 if successful
 */
int main(void)
{
	long double sum, sum_before, copy;
	int i;

	printf("%d, %d, ", 1, 2);
	sum_before = 2;
	sum = 3;
	for (i = 3; i <= 98; i++)
	{
		if (i < 98)
		{
			printf("%.0Lf, ", sum);
			copy = sum;
			sum += sum_before;
			sum_before = copy;
		}
		else if (i == 98)
		{
			printf("%.0Lf\n", sum);
		}
	}
	return (0);
}
