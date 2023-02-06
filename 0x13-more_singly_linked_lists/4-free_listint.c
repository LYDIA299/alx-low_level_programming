#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
