#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*prototypes*/
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
