#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: place to put the copied memory
 *@src: place we are to copy from
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
