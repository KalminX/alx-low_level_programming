#include "main.h"
#include <stdio.h>

/**
 * main - A function that solves the fizzbuzz challenge
 *
 * Return: It returns 0 if successful
 */
int main(void)
{
	int i;

	printf("%d", 1);
	for (i = 2; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf(" %s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" %s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" %s", "Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}