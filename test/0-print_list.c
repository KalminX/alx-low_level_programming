#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints the lists in a linked list
 * @h: the head of the list
 * Return: returns the number of the nodes
 */
size_t print_list(const list_t *h)
{
	size_t list_no = 0;

	while (h != NULL)
	{
		list_no++;
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (list_no);
}
