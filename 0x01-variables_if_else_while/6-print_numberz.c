#include <stdio.h>

/**
 * main - print values using ascii
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');


	return (0);
}
