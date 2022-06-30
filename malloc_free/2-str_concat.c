#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: String
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, m = 0;
	char *k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	k = malloc(l * sizeof(char) + 1);
	if (k == NULL)
		return (NULL);
	j = 0;
	while (m < l)
	{
		if (m < i)
			k[m] = s1[m];
		if (m >= i)
		{
			k[m] = s2[j];
			j++;
		}
		m++;
	}
	k[m] = '\0';
	return (k);
}
