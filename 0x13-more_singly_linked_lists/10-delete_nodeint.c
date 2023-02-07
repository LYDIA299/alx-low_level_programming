#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to head pointer
 * @index: index of the node that should be deleted
 * Return: 1 success, -1 failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *current;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	i = 0;
	while (current != NULL)
	{
		if (i == (index - 1))
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
