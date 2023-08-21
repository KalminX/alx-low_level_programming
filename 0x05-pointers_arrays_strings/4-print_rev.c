#include "main.h"
/**
 * print_rev - prints a string in the reversed form
 * @s: the string literal to be reversed
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
