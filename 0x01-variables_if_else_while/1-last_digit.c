#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of number
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	int n;
	int i = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (i < 6 && i != 0)
	{
		printf("Last digit of %d is less than 6 and not 0", n);
	}

	return (0);
}
