#include <stdio.h>

/**
 *main - prints the first 50 Fibonacci
 *
 *Return: Always 0 (success)
 */
int main(void)
{
long int first, second, next, sum;
first = 1;
second = 2;
sum = 2;
next = first + second;

while (next <= 4000000)
{
if (next % 2 == 0)
sum = sum + next;
first = second;
second = next;
next = first + second;
}
printf("%ld\n", sum);
return (0);
}
