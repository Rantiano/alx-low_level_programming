#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that counts the number of bits to be flipped
 * in order to get from one number to the other
 * @n: The first number on the list
 * @m: The second number on the list
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int np, count = 0;
	unsigned long int new;
	unsigned long int absolute = n ^ m;

	for (np = 63; np >= 0; np--)
	{
		new = absolute >> np;
		if (new & 1)
			count++;
	}

	return (count);
}
