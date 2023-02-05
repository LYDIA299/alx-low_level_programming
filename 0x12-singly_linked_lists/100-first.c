#include <stdio.h>

/**
 * exec_before_main - executes before the main function
 * Return: void
 */

void __attribute__ ((constructor)) exec_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
