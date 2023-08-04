#include "main.h"
#include <stdio.h>

/**
 * print_binary - this prints the binary representation of a decimal number
 * @n: The binary number to be printed
 */
void print_binary(unsigned long int n)
{
	int p, count = 0;
	unsigned long int value;

	for (p = 63; p >= 0; p--)
	{
		value = n >> p;

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
