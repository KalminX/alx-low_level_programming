#include "lists.h"
/**
 * print_listint - prints the data in a linked list
 * @h: the head of the list
 * Return: the number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
