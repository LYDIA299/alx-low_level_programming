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
	int i, n;

	if (str == NULL)
		return (NULL);
	n = strlength(str);
	ptr = malloc(n * sizeof(*ptr) + 1);
	if (ptr == NULL)
		return (NULL);
	/*ptr = strdup(str);*/

	for (i = 0; i < n; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	
	return (ptr);
}
