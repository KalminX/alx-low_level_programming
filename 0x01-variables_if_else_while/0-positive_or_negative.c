#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check for sign of a number
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is positive", n);
	}
	return (0);
}