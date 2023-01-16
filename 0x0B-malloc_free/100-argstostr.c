#include "main.h"

/**
 *argstostr - concatnates all the arguments
 *@ac: parameter
 *@av: parameter
 *Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, d;
	char *ptr, *a;
	d = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			d++;
		d++;
	}

	ptr = malloc(d * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	a = ptr;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}
	return (a);
}
