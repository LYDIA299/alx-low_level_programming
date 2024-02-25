#include <stdio.h> 

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - added two numbers 
 * @a: parameter
 * @b: parameter
 * Return: results
 */

int add(int a, int b)
{
		return (a + b);
}

/**
 * sub - difference of two numbers
 * @a: parameter
 * @b: parameter
 * Return: results
 */

int sub(int a, int b)
{
                return (a - b);
}

/**
 * mul - multiplies two numbers
 * @a: parameter
 * @b: parameter
 * Return: results
 */

int mul(int a, int b)
{
                return (a * b);
}

/**
 * div - divides two numbers
 * @a: parameter
 * @b: parameter
 * Return: results
 */

int div(int a, int b)
{
                return (a / b);
}

/**
 * mod - modulus two numbers
 * @a: parameter
 * @b: parameter
 * Return: results
 */

int mod(int a, int b)
{
                return (a % b);
}
