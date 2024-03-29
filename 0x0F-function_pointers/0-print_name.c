/**
 * print_name - prints a name
 * @name: string of the name to be printed
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
