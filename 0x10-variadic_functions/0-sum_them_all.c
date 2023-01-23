#include "variadic_functions.h"

/**
 *sum_them_all - adds up all the passed in arguments
 *@n: number of arguments
 *Return: their sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list intlist;
	int sum;
	unsigned int i;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(intlist, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(intlist, int);

	va_end(intlist);

	return (sum);
}
