#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, i = 0, k;

	while (*(s + len) != '\0')
	{
		len++;
	}
	k = 0;

	for (i = len - 1; i > k; i--)
	{
		int h = *(s + k);
		*(s + k) = *(s + i);
		*(s + i) = h;
		k++;
	}
	_putchar('\n');
}
