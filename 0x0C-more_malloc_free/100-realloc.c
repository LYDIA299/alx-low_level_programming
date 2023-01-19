#include "main.h"

/**
 *_realloc - reallocates a memory block
 *@ptr: is a pointer to the memory previously allocated with a call to malloc
 *@old_size: is the size, in bytes, of the allocated space for ptr
 *@new_size: is the new size, in bytes of the new memory block
 *Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	char *p, *oldp = ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (ptr == NULL)
	{
		free(p);
		return (p);
	}
	else
	{
		i = 0;
		while (oldp[i])
		{
			p[i] = oldp[i];
			i++;
		}
		free(ptr);
		return (p);
	}
}
