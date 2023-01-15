#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: parameter
 *@s2: parameter
 *Return: pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, c, d = 0;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (ptr == NULL)
		return (NULL);

	for (c = 0; c <= (i + j); c++)
	{
		if ( c < i)
			ptr[c] = s1[c];
		else
			ptr[c] = s2[d++];
	}

	return (ptr);
}
