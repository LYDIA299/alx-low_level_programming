#include "main.h"

/**
 *leet - encodes a string into 1337
 *@str: parameter
 *Return: string
 */

char *leet(char *str)
{
	unsigned int i, j;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	char value[] = {4, 3, 0, 7, 1};

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < (sizeof(key) / sizeof(char)); j++)
		{
			if (str[i] == key[j] || str[i] == key[j] + 32)
			{
				str[i] = '0' + value[j];
			}
		}
		i++;
	}

	return (str);
}
