#include "variadic_functions.h"

/**
 *print_all -prints anything
 *@format: list of types or arguments passed in
 *Return: void
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	char *str, list_type[] = "cifs";
	int j, i = 0;

	va_start(valist, format);
	while (format[i])
	{
		j = 0;
		while (list_type[j])
		{
			if (format[i] == list_type[j] && i)
			{
				printf(", ");
				break;
			} j++;
		}
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
		i++;
	}
	printf("\n"), va_end(valist);
}
