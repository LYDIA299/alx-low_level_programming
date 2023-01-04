#include "main.h"

/**
 *_print_rev_recursion - prints a string in reverse
 *@s: string passed in
 *Return: void
 */

void _print_rev_recursion(char *s)
{
	char *c;

	if (*s == '\0')
	{
		return;
	}
	c = s;
	_print_rev_recursion(++s);
	_putchar(*c);
}
