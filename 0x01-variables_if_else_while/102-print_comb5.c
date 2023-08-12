#include <stdio.h>

/**
 * main - a program that prints all possible combinations of two two-digit numbers
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (j > i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 && j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
