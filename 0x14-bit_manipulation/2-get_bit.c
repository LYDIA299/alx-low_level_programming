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

	while (n >= 1)
	{
		if (i == index)
			return (n % 2);
		i++;
		n = n / 2;
	}
	return (-1);
}
