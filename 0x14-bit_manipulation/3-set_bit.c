#include "main.h"

/**
 * set_bit - set value of bit to 1 at index
 * @n: pointer parameter
 * @index: parameter
 * Return: 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int w;

	if (index > 64)
		return (-1);

	for (w = 1; index > 0; index--, w *= 2)
		;
	*n += w;

	return (1);
}
