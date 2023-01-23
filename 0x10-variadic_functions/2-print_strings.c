#include "variadic_functions.h"

/**
 *print_strings - prints strings
 *@separator: string to be printed between the strings
 *@n: number of strings passed in
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strList;

	va_start(strList, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strList, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	va_end(strList);

	printf("\n");
}
