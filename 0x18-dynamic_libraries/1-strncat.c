#include "main.h"

/**
 *_strncat -  concatenants n elements from src to dest
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *Return: string of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
