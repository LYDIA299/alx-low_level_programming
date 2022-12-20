#include "main.h"

/**
 *puts2 - prints every even character of the string
 *@str: parameter
 *Return: void
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}

	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
			_putchar(*(str - i + j));
	}

	_putchar('\n');
}
