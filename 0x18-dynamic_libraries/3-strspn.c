#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: string to be scanned
 *@accept: substring to be searched
 *Return: the length of @accept from @s
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	/*built-in function*/
	len = strspn(s, accept);
	return (len);
}
