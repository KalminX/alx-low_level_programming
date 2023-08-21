#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int len = 0, j, k, n;

	while (*(str + len) != '\0')
	{
		len++;
	}
	n = len / 2;

	if (len % 2 == 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(*(str + n + j));
		}
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			_putchar(*(str + n + 1 + k));
		}
	}
	_putchar('\n');
}
