#include "main.h"

/**
 * copy_file - copies the content of a file to another file
 * @filename: the file name
 * @filecopy: content to put in the file
 * Return: 0 on failure
 */

void copy_file(const char *filename, char *filecopy)
{
	char cpy[1024];
	int i, i2, j, l;

	i = open(filecopy, O_RDONLY);
	i2 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	j = read(i, cpy, 1024);

	if (j == -1 || i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filecopy);
		exit(98);
	}
	while (j > 0)
	{
		l = write(i2, cpy, j);
		if (l < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
			exit(99);
		}
		j = read(i, cpy, 1024);
	}
}

/**
 * main - check the code
 * @ac: Number of arguments passed to the program
 * @av:  Array of arguments
 * Return: Always 0
 */

int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s filename text\n", av[0]);
		exit(97);
	}
	copy_file(av[2], av[1]);
	return (0);
}
