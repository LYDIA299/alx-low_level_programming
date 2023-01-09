#include "main.h"

/**
 * create_array - creates an array of chars
 *@size: size of the array
 *@c: char to initialize the array with
 *Return: null(failure) or pointer(success)
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(size));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	/*ptr[i] = '\0';*/

	return (ptr);
}
