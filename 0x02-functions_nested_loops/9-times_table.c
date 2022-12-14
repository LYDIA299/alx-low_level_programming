#include "main.h"

/**
 *times_table - prints the 9 times table for 0
 *
 *Return: void
 */

void times_table(void)
{
int i, j, m, a, b;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
m = i * j;
if (m > 9)
{
a = m / 10;
b = m % 10;
_putchar(48 + a);
_putchar(48 + b);
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(48 + m);

if (j != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
}
_putchar('\n');

}
}
