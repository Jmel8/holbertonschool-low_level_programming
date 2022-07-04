#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes of s2 to concatenate to s1
 * Return: Pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conca;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	conca = malloc(sizeof(char) * (len + 1));
	if (conca == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
		conca[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		conca[len++] = s2[i];
	conca[len] = '\0';
	return (conca);
}
