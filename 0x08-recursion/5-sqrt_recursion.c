#include "main.h"
#include <math.h>
#include <stdbool.h>

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: parameter
 *Return: square root
 */

bool isNatural_sqrt(double N)
{
	double temp;
	int x = N;

	temp = N - x;
	if (temp > 0)
		return false;
	else
		return true;
}

int _sqrt_recursion(int n)
{
	double y;

	if (n == 1)
		return (1);

	y = sqrt(n);
	if (isNatural_sqrt(y))
		return ((int) y);
	else
		return (-1);
}
