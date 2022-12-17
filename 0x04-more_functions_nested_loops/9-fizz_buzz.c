#include <stdio.h>
#include <stdlib.h>

/**
 *fizz_Buzz_test - prints numbers from 1 to 100
 *Description: if number is multiple of 3 prints Fizz, of 5 Buzz
 *and both FizzBuzz
 *Return: void
 */

/*prototype*/
void fizz_Buzz_test(void);

int main(void)
{
	fizz_Buzz_test();
	return (0);
}

void fizz_Buzz_test(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");
}
