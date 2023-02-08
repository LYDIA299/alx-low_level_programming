#include "main.h"

/**
 * get_endianness - checks the endianness of the memory
 * Return: int
 */
int get_endianness(void)
{
	int n = 1;
	char *c = (char *) &n;

	if (!(*c))
	{
		/* it means it is a big endian */
		return (0);
	}
	else
	{
		/* it is a little endian */
		return (1);
	}
}
