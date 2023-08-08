#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- this reads text file print to the STDOUT.
 * @filename: The text file for read
 * @letters: The number of the letters to be read
 * Return: w- actual number of the bytes read and printed
 *         0 when th function fails or filename when is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t ft;
	ssize_t wt;
	ssize_t tw;

	ft = open(filename, O_RDONLY);
	if (ft == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	tw = read(ft, buff, letters);
	wt = write(STDOUT_FILENO, buff, tw);

	free(buff);
	close(ft);
	return (wt);
}
