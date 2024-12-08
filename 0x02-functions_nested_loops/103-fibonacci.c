#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints out the fibonacci
 * sequence that's less than 4000000.
 * Return: Returns 0 if successful
 */
int main(void)
{
	long int sum, sum_before, copy;

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
    printf("\n");
	return (0);
}
