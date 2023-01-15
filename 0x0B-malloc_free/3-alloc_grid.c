#include "main.h"

/**
 *alloc_grid - creates a 2 dimensional array of integers
 *@width: parameter
 *@height: parameter
 *Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(*ptr[i]));
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr);
			free(ptr);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
