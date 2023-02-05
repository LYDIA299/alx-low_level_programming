#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head of the list
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
		h = h->next;

	return (n);
}
