#include "main.h"
#include <stdio.h>

/**
 * print_binary - this prints the binary representation of the decimal number
 * @n: The binary number to be printed
 */
void print_binary(unsigned long int n)
{
	int np, count = 0;
	unsigned long int value;

	for (np = 63; np >= 0; np--)
	{
		value = n >> np;

		if (value & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
