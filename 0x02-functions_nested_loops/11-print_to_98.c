#include "main.h"
/**
 * print_to_98 - prints all natural from n to 98
 * @n: the parameter to be printed to or from
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (int i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", 98);
			}
			else if (i >= 98)
			{
				printf("%d, ", i);
			}
		}
		printf("\n");
	}

	if (n <= 98)
	{
		for (int j = n; j <= 98; j++)
		{
			if (j == 98)
			{
				printf("%d", 98);
			}
			else if (j <= 98)
			{
				printf("%d, ", j);
			}
		}
		printf("\n")
	}
}
