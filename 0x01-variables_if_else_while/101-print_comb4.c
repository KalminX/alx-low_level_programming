#include <stdio.h>

/**
 * main - print the possible combinations of 3 digits
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 58; i++)
	{
		for (j = 49; j <= 58; j++)
		{
			for (k = 50; k <= 58; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ')
					}
				}
			}
		}
	}

	return (0);
}
