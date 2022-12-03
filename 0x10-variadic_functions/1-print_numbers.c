#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer parameter
 * @n: parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n > 0)
	{
		va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(valist, int));

			if (i != n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(valist);
	}
	printf("\n");
}
