#include "main.h"

/**
 *_memset - fills the memory with a constant byte
 *@s: starting point
 *@b: character to fill the memory with
 *@n: number of space to be filled
 *Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	/*built in function to solve the problem*/
	memset(s, b, n * sizeof(char));
	return (s);
}
