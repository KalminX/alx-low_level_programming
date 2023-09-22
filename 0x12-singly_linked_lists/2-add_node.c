#include "lists.h"
/**
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->len = strlen(str);
		new_node->next = *head;
		new_node->str = strdup(str);
	}
	else
		return(NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
