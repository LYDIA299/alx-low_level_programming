#include "main.h"

/**
 * flip_bits - returns number of flips to get to number 2 from number 1
 * @n: number 1
 * @m: number 2
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			i++;
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
