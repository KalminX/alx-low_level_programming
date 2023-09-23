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
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node != NULL)
	{
		new_node->len = strlen(str);
		new_node->str = strdup(str);
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (*head != NULL)
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
		(*head)->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
