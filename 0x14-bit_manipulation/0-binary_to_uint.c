#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - this converts a binary number to unsigned integer
 * @b: The string containing the binary digit
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int dec_ui = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		dec_ui = 2 * dec_ui + (b[p] - '0');
	}

	return (dec_ui);
}
