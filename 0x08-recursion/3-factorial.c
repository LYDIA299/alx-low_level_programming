#include "main.h"

/**
 *factorial - returns the factorial of a given number
 *@n: parameter
 *Return: factorial of @n
 */

int factorial(int n)
{
	if (n <= 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
