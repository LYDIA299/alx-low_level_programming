#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head pointer
 * Return:  the number of nodes in the list
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nb = 0;


	while (h)
	{
		nb++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nb);
}
