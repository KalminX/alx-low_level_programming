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
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		if (h->next != NULL)
		{
			printf("[%d] %s", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (i);
}
