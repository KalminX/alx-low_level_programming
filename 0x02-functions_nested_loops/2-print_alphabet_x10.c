#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: returns nothing
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	int j = 0;

	while (j <= 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
