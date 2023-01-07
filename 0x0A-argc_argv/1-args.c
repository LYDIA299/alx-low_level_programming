#include <stdio.h>

/**
 *main - Prints the number of arguments passed into it
 *@argc: number of augments
 *@argv: array of elements
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
