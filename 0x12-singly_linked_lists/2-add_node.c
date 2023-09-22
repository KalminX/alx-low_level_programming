#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a node tye tye beginnig of
 * linked list
 * @head: the head of the list
 * @str: the string in the node
 * Return: returns the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *n_str;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;
	n_str = strdup(str);
	if (n_str == NULL)
	{
		free(n_str);
		return (NULL);
	}
	new_node->str = n_str;
	new_node->len = strlen(new_node->str);
	*head = new_node;

	return (*head);
}
