#include "variadic_functions.h"

/**
 *print_numbers - prints numbers
 *@separator: string to be printed between numbers
 *@n: integers passed to the function
 *Return: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nbrList;
	unsigned int i;
	int num;

	va_start(nbrList, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(nbrList, int);
		printf("%d", num);
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}

	va_end(nbrList);
	printf("\n");

}
