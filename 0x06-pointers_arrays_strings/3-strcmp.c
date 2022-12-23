#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: parameter
 *@s2: parameter
 *Return:  0 if s1 and s2 are the same
 *less than 0 if s1<s2;
 *greater than 0 if s1>s2.
 */

int _strcmp(char *s1, char *s2)
{
	int comp;

	comp = strcmp(s1, s2);
	return (comp);
}
