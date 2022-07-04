#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: Number of elements
 * @size: byte size of each array element
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *i;
	char *j;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = malloc(size * nmemb);
	if (i == NULL)
		return (NULL);
	j = i;
	for (k = 0; k < (size * nmemb); k++)
		j[k] = '\0';
	return (i);
}
