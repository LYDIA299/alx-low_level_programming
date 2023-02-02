#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - program that prints the opcodes of it's own main function
 * @ad: address of the main function
 * @n: number of bytes to print
 * Return: void
 */

void print_opcodes(char *ad, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", ad[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: number of items in argv
 * @argv: list
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int byte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, byte);

	return (0);
}
