#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, i, l, k;

	while (*(s + i) != '\0')
	{
		len++;
	}
	k = 0;

	for (i = len - 1; i >= 0; i--)
	{
		*(s + i) = *(s + k);
		k++;
	}
	_putchar('\n');
}
