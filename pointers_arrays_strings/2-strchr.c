#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: the byte to write
 * @c: to locate
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
