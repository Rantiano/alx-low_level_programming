#include "main.h"
#include <stdio.h>

/**
 * main - print ten times all alphabets in lowercase
 *
 * Return: (0)
 *
 */

int main(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
		count++;
	}
	return (0);
}
