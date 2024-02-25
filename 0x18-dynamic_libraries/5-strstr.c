#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: main string to be examined
 *@needle: substring to be searched
 *Return: pointer pointing to the first character sound
 */

char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);
	return (p);
}
