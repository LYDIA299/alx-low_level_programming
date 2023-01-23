#include "variadic_functions.h"

/**
 *print_all -prints anything
 *@format: list of types or arguments passed in
 *Return: void
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	char *str;
	int i = 0;

	va_start(valist, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		}
		if (format[i + 1] && i)
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(valist);
}
