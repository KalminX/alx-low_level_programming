#include <stdio.h>

/**
 * main - output the lower case form of the alphabelts
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
		putchar("\n");
	}


	return (0);
}
