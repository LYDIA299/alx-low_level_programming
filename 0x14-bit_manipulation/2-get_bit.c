#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index or position
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && index < 64)
		return (0);
	if (index > 63)
		return (-1);

	while (n >= 1)
	{
		if (i == index)
			return (n & 1);
		i++;
		n = n >> 1;
	}
	return (-1);
}
