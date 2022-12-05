#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns value of a bit at a given index
 * @n: parameter
 * @index: parameter
 * Return: value of bit at index, -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val;

	if (index > 64)
		return (-1);

	val = n >> index;

	return (val & 1);
}
