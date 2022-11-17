#include <stdio.h>
#include "function_ponters.h"
/**
 * print_name - function that prints a name
 * @name: char to display
 * @f: pointer function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
