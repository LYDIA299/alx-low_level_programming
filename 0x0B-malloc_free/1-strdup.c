#include "main.h"

/**
 *strlength - length of the string
 *@str: string parameter
 *Return: length
 */

int strlength(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/**
 *_strdup - duplicates a string
 *@str: string passed in
 *Return: pointer to a new string duplicate
 */

char *_strdup(char *str)
{
	char *ptr;
	int n;

	if (str == NULL)
		return (NULL);
	n = strlength(str);
	ptr = malloc(n * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr = strdup(str);
	return (ptr);
}
