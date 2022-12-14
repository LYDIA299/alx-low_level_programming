#include <stdio.h>

/**
 *main - adds the multiples of 3 or 5
 *
 *Return: void
 */

int main(void)
{
int sum, i;
sum = 0;
for (i = 3; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum = sum + i;
}
printf("%d\n", sum);
return (0);
}
