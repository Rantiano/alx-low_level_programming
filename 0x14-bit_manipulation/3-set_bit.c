#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value a bit at a given index to 1
 * @n: Pointer to the number to change unsigned long int
 * @index: The index of the bit to set to 1
 *
 * Return: to return 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index > 63)
		return (-1);

	p = 1 << index;
	*n = (*n | p);

	return (1);
}
