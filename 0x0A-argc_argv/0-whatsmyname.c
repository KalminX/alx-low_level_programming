#include <stdio.h>
#include "main.h"
/**
 * main - prints the first argument
 * @argc: argument count
 * @argv: argument vector
 * Return: always return 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
