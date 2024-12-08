#include "main.h"

/**
 * more_numbers - A function that prints numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int i, j;

	i = j = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar('0' + (j / 10));
			}
			_putchar('0' + (j % 10));
			j++;
		}
		_putchar('\n');
		i++;
	}
}
