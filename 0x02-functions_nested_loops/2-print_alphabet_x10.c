#include "main.h"
/**
 *print_alphabet_x10 - prints alphabets in lower case 10 times
 *
 *Return: none
 */
void print_alphabet_x10(void)
{
int i;
char c;
i = 0;
c= 'a';
while (i < 10)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}

}
