#include <stdio.h>

/**
 * main - print all single digits
 *
 * Return: 0 if successful
 */
int main(void)
{
	char c;

	putchar('0');
	for (c = '1'; c <= '9'; c++)
	{
		putchar(',');
		putchar(' ');
		putchar(c)
	}

	return (0);
}
