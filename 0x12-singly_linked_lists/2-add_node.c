#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head pointer
 * @str: string
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int n;
	list_t *node;
	char *dup;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(node);
		return (NULL);
	}
	for (n = 0; str[n]; n++)
		;
	node->str = dup;
	node->len = n;

	if (*head == NULL)
	{
		(*head) = node;
	}
	else
	{
		node->next = (*head);
		(*head) = node;
	}
	return (node);
}
