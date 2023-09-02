#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - this converts a binary number to an unsigned integer
 * @b: The string containing the binary digit
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int np;
	unsigned int decnum_uint = 0;

	if (!b)
		return (0);

	for (np = 0; b[np]; np++)
	{
		if (b[np] < '0' || b[np] > '1')
			return (0);
		decnum_uint = 2 * decnum_uint + (b[np] - '0');
	}

	return (decnum_uint);
}
