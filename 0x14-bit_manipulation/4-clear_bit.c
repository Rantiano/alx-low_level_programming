#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: Pointer of the unsigned long int number to change
 * @index: The index of the bit to be cleared
 *
 * Return: 1 if successful, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index > 63)
		return (-1);

	p = 1 << index;

	if (*n & p)
		*n ^= p;

	return (1);
}
