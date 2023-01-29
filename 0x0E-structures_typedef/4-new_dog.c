#include "dog.h"

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

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
