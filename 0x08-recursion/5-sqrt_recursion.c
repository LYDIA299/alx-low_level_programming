#include "main.h"
/**
 * _sqrt - finds the square root
 * @n: number to look for it's sqrt
 * @a: parameter
 * Return: sqrt
 */

int _sqrt(int n, int a)
{
	if (n == 1)
		return (1);
	else if ((a * a) > n)
		return (-1);
	else if (a * a == n)
		return (a);
	return (_sqrt(n, a + 1));
}

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
