#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints out the fibonacci
 * sequence.
 * Return: Returns 0 if successful
 */
int main(void)
{
	long int i, sum, sum_before, copy;

	printf("%d, %d, ", 1, 2);
	sum_before = 2;
	sum = 3;
	while (sum < 4000000)
	{
        printf("%li", sum);
        copy = sum;
        sum += sum_before;
        sum_before = copy;
        if (sum < 4000000)
        {
            printf(", ");
        }
	}
	return (0);
}
