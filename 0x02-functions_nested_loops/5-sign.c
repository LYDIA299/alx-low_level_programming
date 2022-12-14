#include "main.h"

/**
 *print_sign - checks the sign of an input
 *Description: It has to print out the sign compared to zero
 *@n: is the value of the argument or parameter
 *
 *Return: 1 (n greater than zero), 0 (n is zero) or -1 (n < 0)
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
