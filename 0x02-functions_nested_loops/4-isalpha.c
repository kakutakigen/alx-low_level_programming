#include "main.h"
/**
 * _isalpha -determines alpha
 * @c: int value to compare ASCII value
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
