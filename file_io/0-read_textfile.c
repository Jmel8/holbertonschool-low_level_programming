#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename:
 * @letters:
 * Return:
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j;
	char *cpy = malloc(letters);

	if (cpy == NULL || filename == NULL)
	{
		free(cpy);
		return (0);
	}
	i = open(filename, O_RDONLY);
	if (i < 0)
	{
		free(cpy);
		return (0);
	}
	j = read(i, cpy, letters);
	write(STDOUT_FILENO, cpy, j);
	close(i);
	free(cpy);
	return (j);
}
