#include "main.h"
#include <math.h>
#include <stdbool.h>

/**
 *sqrt1 - finds the square root
 *@n: number to look for it's sqrt
 *@a: parameter
 *Return: sqrt
 */

double sqrt1(int n, int a)
{
	if (n == 1)
		return (1);
	else if (a < 1)
		return (-1);
	else if (a * a == n)
		return (a);
	else
		return (sqrt1(n, a - 1));
}

/**
 *isNatural_sqrt - tests if the number is a natural number
 *@N: parameter
 *Return: boolean
 */

bool isNatural_sqrt(double N)
{
	double temp;
	int x = N;

	temp = N - x;
	if (temp > 0)
		return (false);
	else
		return (true);
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: parameter
 *Return: square root
 */

int _sqrt_recursion(int n)
{
	double y;

	if (n == 1)
		return (1);

	y = sqrt1(n, n - 1);
	if (isNatural_sqrt(y))
		return ((int) y);
	else
		return (-1);
}
