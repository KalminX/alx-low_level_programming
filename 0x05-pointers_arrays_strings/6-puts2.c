#include "main.h"
/**
 * puts2 - a function that prints every odd character of a string
 * @str: the str that puts2 will work on
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
