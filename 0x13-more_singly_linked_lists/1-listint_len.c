#include "lists.h"
/**
 * listint_len - calculates the number of elements of
 * linked list
 * @h: the head of the list
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
