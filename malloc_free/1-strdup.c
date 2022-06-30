#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: a string pointer
 */
char *_strdup(char *str)
{
	int i = 1, k = 0;
	char *j;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	j = malloc(i * sizeof(char) + 1);
	if (j == NULL)
		return (NULL);
	while (k < i)
	{
		j[k] = str[k];
		k++;
	}
	j[k] = '\0';
	return (j);
}
