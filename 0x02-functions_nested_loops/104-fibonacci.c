#include <stdio.h>

/**
 *main - prints the first 98 Fibonacci
 *
 *Return: Always 0 (success)
 */
int main(void)
{
long int first, second, next, count;
first = 1;
second = 2;
count = 4;
next = first + second;
printf("%lu, %lu, %lu", first, second, next);

while (count <= 98)
{
first = second;
second = next;
next = first + second;
printf(", %lu", next);
count++;
}
printf("\n");
return (0);
}
