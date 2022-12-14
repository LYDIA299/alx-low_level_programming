#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: parameter
 *
 *Return: last digit
 */

int print_last_digit(int n)
{
int nb = n % 10;
if (nb < 0)
nb = nb * -1;
_putchar('0' + nb);
return (nb);
}
