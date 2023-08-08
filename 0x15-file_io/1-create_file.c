#include "main.h"
#include <stdio.h>

/**
 * create_file - this to create a file.
 * @filename: A pointer to the file name to be created.
 * @text_content: A pointer to a string to be written to the file.
 *
 * Return: If function fails, returns -1.
 *         Otherwise, if successful, returns 1.
 */
int create_file(const char *filename, char *text_content)
{
	int ft, wt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	ft = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(ft, text_content, length);

	if (ft == -1 || wt == -1)
		return (-1);

	close(ft);

	return (1);
}
