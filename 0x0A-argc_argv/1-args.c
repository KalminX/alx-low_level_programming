#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	return (0);
}
