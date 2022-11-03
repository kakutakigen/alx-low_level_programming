#include "main.h"
/**
 * _strlen_recursion -prints length of a string
 * @s: pointer block of memory to fill
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
