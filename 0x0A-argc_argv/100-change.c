#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that returns change
 * to a customer based on coin values
 * @argc: argument count
 * @argv: argument vector
 * Return: retuns 0 if true
 */
int main(int argc, *argv[])
{
	int i, j, num, result;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = 0;
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	else
	{
		for (i = 0; i < 5; i++)
		{
			while (num >= coin[i])
			{
				num -= coin[i];
				result++;
			}
		}
	}
	printf("%d", result);
}
