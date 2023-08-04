#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a linked list
 * @head: head pointer
 * Return: the nth node
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
