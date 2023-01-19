#include "main.h"

/**
 *getLength - gets the length of the string
 *@str: parameter
 *Return: length
 */

unsigned int getLength(char *str)
{
	unsigned int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 *string_nconcat - concatenates two strings
 *@s1: parameter
 *@s2:parameter
 *@n: parameter
 *Return: string pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, i;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s2 = getLength(s2);
	len_s1 = getLength(s1);

	if (n >= len_s2)
	{
		p = malloc(sizeof(char) * (len_s1 + len_s2) + 1);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < len_s1; i++)
			p[i] = s1[i];
		for (i = len_s1; i < (len_s1 + len_s2); i++)
		{
			p[i] = *s2;
			s2++;
		}

	}
	else
	{
		for (i = 0; i < n; i++)
		{
			p = malloc(sizeof(char) * (len_s2 + n) + 1);
			if (p == NULL)
				return (NULL);
			for (i = 0; i < len_s1; i++)
				p[i] = s1[i];
			for (i = len_s1; i < (len_s1 + n); i++)
			{
				p[i] = *s2;
				s2++;
			}

		}
	}
	p[i] = '\0';
	return (p);
}
