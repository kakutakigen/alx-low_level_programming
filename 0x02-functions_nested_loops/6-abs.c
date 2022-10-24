#include "main.h"
/**
 * _abs -prints absolute value
 * @r: int value to be determined
 * Return: 0
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		r *= -1;
		return (r);
	}
}
