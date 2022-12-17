#include "main.h"

/**
 *print_triangle - prints a triangle
 *@size: parameter
 *Return: void
 */

void print_triangle(int size)
{
	int i, j, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - i - 1); j++)
			{
				_putchar(' ');
			}
			for (m = 0; m <= i; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
