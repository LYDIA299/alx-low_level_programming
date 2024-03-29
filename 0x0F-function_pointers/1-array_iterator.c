#include <stdio.h>

/**
 * array_iterator - executes a function given through the parameters
 * @array: array storing values
 * @size: size of the array
 * @action: callback function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
