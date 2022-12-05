#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flips bits to convert a number to another
 * @n: first parameter
 * @m: second parameter
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int c;

	d = n ^ m;
	c = 0;

	while (d)
	{
		c++;
		d &= (d - 1);
	}

	return (c);
}
