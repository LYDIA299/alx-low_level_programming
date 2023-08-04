#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head pointer
 * Return:  the number of elements in the list
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nb = 0;


	while (h)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
