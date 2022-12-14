#include <stdio.h>

/**
 *main - prints the first 50 Fibonacci
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
printf("%ld, %ld, %ld", first, second, next);

while (count <= 50)
{
first = second;
second = next;
next = first + second;
printf(", %ld", next);
count++;
}
printf("\n");
}
