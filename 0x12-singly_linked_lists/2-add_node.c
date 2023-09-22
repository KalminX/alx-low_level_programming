#include <stdio.h>
#include "lists.h"
/**
 * add_node - a functon that adds a node to
 * the beginning of a linked list
 * @head: the head of a linked list
 * @str: the string
 * Return: returns the head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->len = strlen(str);
		new_node->next = *head;
		new_node->str = strdup(str);
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
