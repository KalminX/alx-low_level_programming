#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of the numbers entered into the
 * command line as an argument
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 if successful and 1 if unsuccessful
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{

			if (argv[i] >= '0' && argv[i] <= '9')
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}
