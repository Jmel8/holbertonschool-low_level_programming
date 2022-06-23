#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: the byte to write
 * @c: to locate
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
		i++;
	for (j = 0; j < i; j++)
	{
		if (c == s[j])
		{
			s += j;
		return (s);
		}
	}
	return (NULL);
}
