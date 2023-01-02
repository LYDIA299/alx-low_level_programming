#include "main.h"

/**
 *_strpbrk - searched a string for any of a set of bytes
 *@s: string to be scanned
 *@accept: string containing the characters to match
 *Return: a pointer to the character in s that matches one of the characters in
 *@accept else returns null
 */

char *_strpbrk(char *s, char *accept)
{
	char *f;

	/*built-in function*/
	f = strpbrk(s, accept);
	return (f);
}
