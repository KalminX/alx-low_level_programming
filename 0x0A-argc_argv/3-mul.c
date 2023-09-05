#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies the arguments given to the command line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc == 3)
	{
		for (i = 1; i < 3; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
		return (1);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
