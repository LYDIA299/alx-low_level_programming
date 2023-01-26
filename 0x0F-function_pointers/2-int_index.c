/**
 * int_index - searches for an integer
 * @array: array to search from
 * @size: size of an array
 * @cmp: callback function
 *
 * Return: index to the first element that returns true
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);

		}
	}
	return (-1);
}
