#include "main.h"

/**
 *main - Calls the print_alphabet function
 *
 *Return: always 0 (success)
 */

int main(void)
{
print_alphabet();
return (0);
}

/*function declared fron the main.h*/
void print_alphabet()
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
