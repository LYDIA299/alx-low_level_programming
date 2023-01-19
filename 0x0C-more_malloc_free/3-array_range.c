#include "main.h"

/**
 *array_range - creates an array of integers
 *@min: parameter
 *@max: parameter
 *Return: int
 */

int *array_range(int min, int max)
{
	int i, l, *p;

	if (min > max)
		return (NULL);
	l = (max - min) + 1;

	/*memory allocation*/
	p = malloc(sizeof(int) * l);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
