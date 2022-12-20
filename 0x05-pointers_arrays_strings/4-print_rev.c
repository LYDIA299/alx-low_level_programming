#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: parameter pointer
 *Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}

	while (i >= 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
