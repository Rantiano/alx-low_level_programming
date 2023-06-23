#include "main.h"

/**
 * print_to_98 - print all numbers from input to 98
 *
 * Description: using _putchar to print
 * @n: the starting number
 *
 * Return: (0)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			int num = i;

			while (num > 0)
			{
				_putchar(num % 10 + '0');
				num /= 10;
			}
			_putchar(' ');
		}
	}
	_putchar('\n');

	int start = 0;

	print_to_98(start);

	return (0);
}
