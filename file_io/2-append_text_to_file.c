#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file name
 * @text_content: Content to append the file
 * Return: 1 if successful, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, count;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
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
