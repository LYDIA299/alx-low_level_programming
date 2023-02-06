#include "lists.h"

/**
 * listint_len - returns the number of elements of a linked list
 * @h: head pointer
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;

	if (h == NULL)
		return (nbr);
	while (h != NULL)
	{
		nbr++;
		h = h->next;
	}
	return (nbr);
}
