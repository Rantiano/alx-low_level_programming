#include "main.h"
#include <stdio.h>

/**
 * get_bit - function to returns the value of a bit at a given index
 * in a decimal number
 * @n: The number to search for
 * @index: The bit index
 *
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int p;

	if (n == 0 && index < 64)
		return (0);

	for (p = 0; p <= 63; n >>= 1, p++)
	{
		if (index == p)
		{
			return (n & 1);
		}
	}

	return (-1);
}
