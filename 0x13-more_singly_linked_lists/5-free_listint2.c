#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
		*head = NULL;
	}
}
