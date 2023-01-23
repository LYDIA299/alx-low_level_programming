##Variadic functions "stdarg.h"
is a header in the C standard library of C programming language.
It allows functions to accept an indefinite number of arguments

##Declaring variadic functions
Variadic functions are functions which may take a variable number of arguments
and are declare with an ellipsis in place of the last parameter having atleast
one named parameter
int check(int a, double b, ...);
int add(int n,...);
long func(char, double, int, ...);

##stdarg.h macros
va_start, va_arg, va_end, va_copy