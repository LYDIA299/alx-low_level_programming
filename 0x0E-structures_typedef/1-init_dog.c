#include "dog.h"

/**
 * init_dog - initializes a variable of type struc dog
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
