#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog variable
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("(nil)\n");
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("(nil)\n");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)\n");
}
