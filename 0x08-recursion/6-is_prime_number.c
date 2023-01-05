#include <math.h>
#include "main.h"

/**
 *is_prime_number - checks if the number if prime
 *@n:parameter
 *Return: 1 (true) otherwise 0 (false)
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i < (n /2); i++)
	{
		if ((n % i == 0) && (i != 1))
			return (0);
	}
	return (1);
}
