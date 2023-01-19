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
	unsigned int len_s1, len_s2, i, l;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s2 = getLength(s2);
	len_s1 = getLength(s1);

	if (n >= len_s2)
		l = len_s1 + len_s2;
	else
		l = len_s1 + n;

	/*allocating space with malloc*/
	p = malloc(sizeof(char) * l + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		if (i < len_s1)
		{
			p[i] = s1[i];
		}
		else
		{
			p[i] = *s2;
			s2++;
		}
	}
	p[i] = '\0';
	return (p);
}
