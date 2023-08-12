#include <stdio.h>

/**
 * main - print all single digits
 *
 * Return: 0 if successful
 */
int main(void)
{
	int c;

	for (c = 48; c <= 56; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar(c);

	return (0);
}
