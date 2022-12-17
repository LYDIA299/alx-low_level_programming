#include <math.h>
#include <stdio.h>

/**
 *maxPrimeFactors - A function to find largest prime factor
 *@n: parameter
 *Return: maxPrime
 */

int maxPrimeFactors(unsigned long int n)
{
	int maxPrime, i;
	maxPrime = -1;

	/*Print the number of 2s that divide n*/
	while (n % 2 == 0)
	{
		maxPrime = 2;
		n = n / 2;
	}
	/* n must be odd at this point*/
	while (n % 3 == 0)
	{
		maxPrime = 3;
		n = n / 3;
	}

	/* now we have to iterate only for integers*/
	/*who does not have prime factor 2 and 3*/
	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}

	/*This condition is to handle the case*/
	/*when n is a prime number greater than 4*/
	if (n > 4)
		maxPrime = n;

	return (maxPrime);
}

/**
 *main - Entry point
 *Return: 0 always
 */

int main(void)
{
	unsigned long int n;

	n = 612852475143;
	printf("%d", maxPrimeFactors(n));

	return (0);
}
