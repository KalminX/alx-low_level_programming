#include <stdio.h>
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

	if (argc == 1)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}
}
