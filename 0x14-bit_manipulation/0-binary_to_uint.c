#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer parameter
 * Return: converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	insigned int total, power;
	int len;

	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}
	return (total);
}
