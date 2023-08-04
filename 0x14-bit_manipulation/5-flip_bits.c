#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that counts the number of bits to be flipped
 * so as to get from one number to the other
 * @n: The first number
 * @m: The second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int new;
	unsigned long int absolute = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		new = absolute >> p;
		if (new & 1)
			count++;
	}

	return (count);
}
