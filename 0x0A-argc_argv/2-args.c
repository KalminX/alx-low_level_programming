#include <stdio.h>
#include "main.h"
/**
 * main - prints the arguments passed to the command line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		puts(argv[i]);
	}
	return (0);
}
