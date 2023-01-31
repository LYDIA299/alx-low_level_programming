#include "dog.h"

/**
 * copy_str - copies a string
 * @str: string to copy
 * Return: returns a pointer
 */

char *copy_str(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
		return;

	for (i = 0; *str != '\0'; i++)
		;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return;
	for (j = 0; j < (i + 1); j++)
		ptr[j] = str[j];
	ptr[j] = '\0';
	return (ptr);
}

/**
 * new_dog - creates a new dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: struct dog pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *newName, *newOwner;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	newName = copy_str(name);
	newOwner = copy_str(owner);

	if (newName == NULL || newOwner == NULL)
	{
		free(d);
		return (NULL);
	}


	d->name = newName;
	d->age = age;
	d->owner = newOwner;

	return (d);
}
