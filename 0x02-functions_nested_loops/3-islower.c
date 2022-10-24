#include "main.h"
/**
 * _islower -identifies lowercase
 * @c: is int value to be compared with ASCII value
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
