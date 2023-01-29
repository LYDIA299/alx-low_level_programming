# 0x0E. C - Structures, typedef #

## Structures ##
is a composite data type (or record) declaration that defines a physically
grouped list of variables under one name in a block of memory.

#### Declaration of a structure ####
struct tag_name {
   type member1;
   type member2;
 }

## typedef ##
It allows you to introduce synonyms for types which could have been declared
some other way.

#### examples ####
 typedef unsigned char byte
 byte c; "this means c is unsigned cahr"

 typedef struct tag_name {
    type member1;
    type member2;
   } struct_alias;

### files ###
Task-0 (dog.h) : Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

Task-1 (1-init_dog.c) : Write a function that initialize a variable of type struct dog
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

Task-2 (2-print_dog.c) : Write a function that prints a struct dog
Prototype: void print_dog(struct dog *d);

Task-3 (dog.h) : Define a new type dog_t as a new name for the type struct dog

Task-4 (4-new_dog.c) : Write a function that creates a new dog.
Prototype: dog_t *new_dog(char *name, float age, char *owner);

Task-5 (5-free_dog.c) : Write a function that frees dogs.
Prototype: void free_dog(dog_t *d);
