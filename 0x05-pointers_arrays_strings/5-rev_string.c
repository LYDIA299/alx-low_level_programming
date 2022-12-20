#include "main.h"

/**
 *rev_string - reverses a string
 *@s: parameter
 *Return: void
 */

void rev_string(char *s)
{
	int len, i;
	char temp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = temp;
	}
}
