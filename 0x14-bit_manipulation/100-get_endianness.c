#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function that checks the endianness status
 *
 * Return: 0 if endian is big, 1 if endian is little
 */
int get_endianness(void)
{
	unsigned int np;
	char *chr;

	np = 1;
	chr = (char *) &np;

	return ((int)*chr);
}
