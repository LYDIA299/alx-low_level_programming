#include "main.h"

/**
 *isBreaker - checks if the character is a breaker
 *@c: parameter
 *Return: 1 (true), 0 (false)
 */

int isBreaker(char c)
{
	int j;

	char str[] = " \t\n,;.!?\"(){}";

	j = 0;

	while (str[j] != '\0')
	{
		if (c == str[j])
			return (1);
		j++;
	}
	return (0);
}

/**
 *cap_string - capitalizes all words of a string
 *@str: parameter pointer
 *Return: pointer
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isBreaker(str[i - 1]) == 1 || i == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
	}

	return (str);
}
