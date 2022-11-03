#include "main.h"
/**
 * helper -returns natural square root of a number
 * @x: integer to be determined
 * @y:integer to test for square root of @x
 * Return: 0
 */
int helper(int x, int y)
{
	if (y * y > x)
		return (-1);
	else if (y * y == x)
		return (y);
	else
		return (helper(x, y + 1));
	return (1);
}
/**
 * _sqrt_recursion -returns natural square root of a number
 * @n: integer to be determined
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
