#include "main.h"

/**
 *_isalpha - tests if the input is an alphabet
 *Description: It gets the input and tests it with the alphabets
 *@c: is the parament or argument passed in
 *
 *Return: 1 (success) or 0 (fail)
 */

int _isalpha(int c)
{
char alpha, ALPHA;
alpha = 'a';
ALPHA = 'A';
while (alpha <= 'z' || ALPHA <= 'Z')
{
if (c == alpha || c == ALPHA)
return (1);
alpha++;
ALPHA++;
}
return (0);
}
