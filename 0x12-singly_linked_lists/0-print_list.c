#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - a function that prints the data
 * in a linked list
 * @h: the head of the list
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0, count;
	char *data;

	count = h->len;
	while (h != NULL)
	{
		h = h->next;
		data = strdup(h->str);
		if (data != NULL)
		{
			printf("[%d] %s", i, data);
		}
		else
			printf("[%d]\n", 0);
		count++;
	}
	return (count);
}
