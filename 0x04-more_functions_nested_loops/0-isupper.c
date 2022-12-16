#include "main.h"

/**
 *_isupper - checks if the input c is uppercase character or not
 *@c: parameter
 *Return: 1 (success) or 0 (fail)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
