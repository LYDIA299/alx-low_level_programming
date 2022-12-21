#include "main.h"

/**
 * print_array - this function prints n elements of an array of integers
 * @a: pointer to array.
 * @n: number of array elements.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
