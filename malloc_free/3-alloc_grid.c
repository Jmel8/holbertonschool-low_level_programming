#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of an array
 * @height: height of an array
 * Return: a pointer to a allocated grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(height * (sizeof(int *)));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * (sizeof(int)));
		if (s[i] == NULL)
		{
			for (j = 1; j > 0; j--)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			s[k][l] = 0;
	}
	return (s);
}
