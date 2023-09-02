#include "main.h"
#include <stdio.h>

/**
 * get_bit – this function returns the value of a bit at a given index
 * in a decimal number
 * @n: The number to be searched for
 * @index: The bit index
 *
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int np;

	if (n == 0 && index < 64)
		return (0);

	for (np = 0; np <= 63; n >>= 1, np++)
	{
		if (index == np)
		{
			return (n & 1);
		}
	}

	return (-1);
}
