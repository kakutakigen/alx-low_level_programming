#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @name: char to display
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
