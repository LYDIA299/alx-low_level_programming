#include <stdio.h>

/**
 *main - Entry point
 *@argc: number of elements
 *@argv: string array of commandline elements
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
