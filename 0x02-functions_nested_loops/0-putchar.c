#include "main.h"

/**
 *main - prints a string
 *
 *Return: Always 0 (success)
 */

int main(void)
{
int i;
char word[8] = "_putchar";
for (i = 0; i < 8; i++)
_putchar(word[i]);
_putchar('\n');
return (0);
}
