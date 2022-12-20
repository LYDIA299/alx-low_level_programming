#include "main.h"
/**
 * puts_half - this function prints half of any string
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int x, length, m;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		m = length / 2;
		for (x = m; x < length; x++)
		{
			_putchar(str[x]);
		}
	}
	else
	{
		m = (length - 1) / 2;
		for (x = m + 1; x < length; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
