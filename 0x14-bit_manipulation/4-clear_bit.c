#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets bit value to 0 at index
 * @n: pointer parameter
 * @index parameter
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int y;

	if (index > 64)
		return (-1);

	y = index;

	for (x = 1; y > 0; x *= 2, y--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
