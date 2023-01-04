#include "main.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s: string passed in
 *Return: length of @s
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		i++;
		_strlen_recursion(s++);
	}
}
