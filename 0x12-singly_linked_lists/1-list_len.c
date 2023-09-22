#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function that prints the
 * number of elements in a linked list
 * @h: the head of the linked list
 * @Return: returns the size of the list in byte
 */
size_t list_len(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h->next;
	}
	return (count);
}
