#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - is a structure
 * @name: variable
 * @age: variable
 * @owner: variable
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
