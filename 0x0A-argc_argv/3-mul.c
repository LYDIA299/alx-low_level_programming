#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: parameter
 *@argv: parameter
 *Return: 0 (success) 1 (fail)
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
