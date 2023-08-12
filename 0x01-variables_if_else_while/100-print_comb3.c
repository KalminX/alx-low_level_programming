#include <stdio.h>

/**
 * main - output the possible combinations of two two digit numbers
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
			
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');

	return (0);
}
