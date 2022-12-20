/**
 *swap_int - swaps the value of two integers
 *@a: parameter pointer
 *@b: parameter pointer
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
