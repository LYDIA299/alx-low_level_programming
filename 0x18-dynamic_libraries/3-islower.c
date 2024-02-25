#include "main.h"

/**
 *_islower - checks if the argument is lowercase or not
 *@c: is the parament
 *Description: the unsigned char gets the caracter form of any
 *value/char passed and it's what we use to compare
 *
 *Return: 1 (success) and 0 (fail)
 */

int _islower(int c)
{
unsigned char i;
char d;
i = c;
d = 'a';
while (d <= 'z')
{
if (i == d)
return (1);
d++;
}
return (0);

}
