#include "main.h"

/**
 * print_square - A function that prints a square
 *
 * @size: The length of sides of the square
 */
void print_square(int size)
{
	int i, size_copy;

	size_copy = size;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (size_copy > 0)
		{
			i = size;
			while (i > 0)
			{
				_putchar('#');
				i--;
			}
			_putchar('\n');
			size_copy--;
		}
	}
}
