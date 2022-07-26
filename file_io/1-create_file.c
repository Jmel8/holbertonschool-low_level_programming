#include "main.h"

/**
 * create_file - creates a file
 * @filename: Name of the file
 * @text_content: Content to write to the file
 * Return: 1 is successful, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int i, j, count;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content == NULL)
		return (1);
	if (i < 0)
		return (-1);
	for (count = 0; text_content[count]; count++)
	{}
	j = write(i, text_content, count);
	if (j < 0)
		return (-1);

	close(i);
	return (1);
}
