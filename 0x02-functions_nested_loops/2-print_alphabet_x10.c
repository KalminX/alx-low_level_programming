#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: returns nothing
 */
void print_alphabet_x10(void)
{
	int i = 'a', j = 0;

	while (j <= 10)
	{
		j++;
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
