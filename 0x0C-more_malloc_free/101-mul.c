#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *_isDigit - checks if a number is a digit
 *@str: parameter
 *@n: parameter
 *Return: int
 */

int _isDigit(char *str[], int n)
{
	int i = 0;

	while (str[n][i])
	{
		if (!isdigit(str[n][i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 *main - entry point
 *@argc: parameter
 *@argv: parameter
 *Return: int
 */

int main(int argc, char *argv[])
{
	int num1, num2, r;

	if (argc == 1 || argc > 3)
	{
		/*printf("Error\n");*/
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		exit(98);
	}


	if (_isDigit(argv, 1) && _isDigit(argv, 2))
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		r = num1 * num2;
		printf("%d", r);
		putchar('\n');
	}
	else
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		exit(98);
		}
	return (0);
}
