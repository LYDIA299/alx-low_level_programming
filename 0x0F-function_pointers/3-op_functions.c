#include "3-calc.h"

/**
 * op_add - adds the numbers
 * @a: number 1
 * @b: number 2
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts the numbers
 * @a: number 1
 * @b: number 2
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies the numbers
 * @a: number 1
 * @b: number 2
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the numbers
 * @a: number 1
 * @b: number 2
 * Return: the result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulates the numbers
 * @a: number 1
 * @b: number 2
 * Return: the modulous of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
