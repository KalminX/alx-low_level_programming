#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural from n to 98
 * @n: the parameter to be printed to or from
 */
void print_to_98(int n)
{
	int i, j;

	if (n == 98)
	{
		printf("%d", 98);
	}

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
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

	if (n < 98)
	{
		for (j = n; j <= 98; j++)
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
		printf("\n");
	}
}
