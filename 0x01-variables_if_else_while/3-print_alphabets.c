#include <stdio.h>

/**
 * main - prints out the lowercase followed by uppercase
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A', c <= 'Z', c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
