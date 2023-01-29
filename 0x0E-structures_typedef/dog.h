#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - is a structure
 * @name: variable
 * @age: variable
 * @owner: variable
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
