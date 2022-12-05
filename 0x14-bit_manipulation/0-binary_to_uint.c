#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer parameter
 * Return: converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;

	num = 0;
	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
