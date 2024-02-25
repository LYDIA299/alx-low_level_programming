#include "main.h"

/**
 *_isdigit - checks if the input is a digit
 *@c: parameter
 *Return: 1 (true) or 0 (false)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '0' + 9)
		return (1);
	else
		return (0);
}
