#include "main.h"
/**
 *
 *
 *
 *
 *
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		j = 0;
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 24) + '0');
			_putchar((i % 24) + '0');
			_putchar(':');
			_putchar((j / 60) + '0');
			_putchar((j % 60) + '0');
			_putchar('\n');
		}
	}
}
