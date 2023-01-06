#include "main.h"

int comp(char *s, int i, int j);

/**
 *_len - gets the length of the string
 *@s: parameter
 *Return: int for length
 */

int _len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _len(++s));
}

/**
 *comp - compares the values of the string at different points
 *@s: string parameter
 *@i: starting point
 *@j: ending point
 *Return: 1 (true) or 0 (false)
 */

int comp(char *s, int i, int j)
{
	if ((s[i] == s[j - 1]) && (i <= j))
	{
		return (comp(s, ++i, --j));
	}
	else if (i > j)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 *is_palindrome - tests is a string is palindrome
 *@s: string
 *Return: 1 if true and 0 false
 */

int is_palindrome(char *s)
{
	int j;

	j = _len(s);

	return (comp(s, 0, j));
}
