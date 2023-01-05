#include "main.h"

/**
 *is_prime_number - checks if the number if prime
 *@n:parameter
 *Return: 1 (true) otherwise 0 (false)
 */

int is_prime_number(int n)
{
	if ((n % 2 == 0) || (n % 3 == 0) || n == 1)
		return (0);
	else
		return (1);
}
