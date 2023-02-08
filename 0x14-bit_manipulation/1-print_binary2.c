#include "main.h"

/**
 * to_binary - converts a number to binary
 * @n: number to convert
 * Return: binary
 */
unsigned long int to_binary(unsigned long int n)
{
	if (n < 2)
		return (n);
	return to_binary(n >> 1) * 10 + (n & 1);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = to_binary(n);
	printf("%lu", num);
}
