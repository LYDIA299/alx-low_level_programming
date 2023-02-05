#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the linked list
 * @head: pointer to the head pointer
 * @str: string field
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *new_node, *current;
	unsigned int n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (n = 0; str[n]; n++)
		;

	new_node->str = dup;
	new_node->len = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node);
}
