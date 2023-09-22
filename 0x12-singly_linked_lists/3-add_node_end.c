#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a node to the end of a linked
 * list
 * @head: the head of the linked list
 * @str: the string in the node
 * Return: returns the new tail of the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (*head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
		return (NULL);
	while (*head != NULL)
	{
		if ((*head)->next != NULL)
			*head = (*head)->next;
	}
	new_node = NULL;
	return (new_node);
}
