#include "lists.h"

/**
 * get_nodeint_at_index - searches for a node
 * @head: head pointer
 * @index: index of the node
 * Return: nth node of listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (i <= index && current != NULL)
	{
		if (i == index)
			return (current);

		i++;
		current = current->next;
	}
	return (NULL);
}
