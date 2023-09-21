#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "main.h"
/**
 * print_list - a function that prints the data
 * in a linked list
 * @h: the head of the list
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i, count;
	char *data;

	data = strdup(h->str);
	count = h->len;
	while (h->str != NULL)
	{
		h = h->next;
		if (data != NULL)
		{
			while (data != NULL)
			{
				_putchar(*(data + i));
				i++;
			}
		}
		else
			_putchar('0');
		_putchar('\n');
		count++;
	}
	return (count);
}
