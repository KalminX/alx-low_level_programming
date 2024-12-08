#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints out the sum of even fibonacci
 * numbers that's less than 4000000.
 * Return: Returns 0 if successful
 */
int main(void)
{
	long int sum, total, copy, sum_before;

	sum_before = 2;
	sum = 3;
	total = 2;
	while (sum < 4000000)
	{
		if (sum % 2 == 0)
		{
			total += sum;
		}
		copy = sum;
		sum += sum_before;
		sum_before = copy;
	}
	printf("%li\n", total);
	return (0);
}
