#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds positive numbers
 *@argc: parameter
 *@argv: parameter
 *Return: 0 (success) 1 (fail)
 */

int main(int argc, char *argv[])
{
	int sum, j, i;

	if (argc > 1)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
