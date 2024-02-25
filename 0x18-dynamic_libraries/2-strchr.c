#include "main.h"

/**
 *_strchr - searches for a character in a string
 *@s: string to be scanned
 *@c: character to be looked for
 *Return: the pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	char *r;

	/*inbuilt function for search*/
	r = strchr(s, c);
	return (r);
}
