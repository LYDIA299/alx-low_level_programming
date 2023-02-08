#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the value
 * @index: index position
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b = 1;

	if (index > 63)
		return (-1);

	b = b << index;
	(*n) = (*n) | b;
	return (1);
}
