#include "3-calc.h"

/**
 * main - Entry point
 * @argc: contains length of argv
 * @argv: list of command values or strings
 * Return: 0 success
 */

int main (int argc, char *argv[])
{
	int num1, num2, result, (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = f(num1, num2);
	if (result)
	{
		printf("%d\n", result);
	}

	return (0);
}
