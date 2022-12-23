#include "main.h"

/**
 *_strcpy - copies n elements of string from src to dest
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
