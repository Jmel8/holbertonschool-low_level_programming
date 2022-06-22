#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string
 * @i: string to upper
 * Return: a string
 */
char *cap_string(char *i)
{
	int j;

	for (j = 0; i[j] != '\0'; j++)
	{
	if ((i[j - 1] == 32) || (i[j - 1] == 9) || (i[j - 1] == '\n')
	|| (i[j - 1] == ',') || (i[j - 1] == ';') || (i[j - 1] == '.')
	|| (i[j - 1] == '!') || (i[j - 1] == '?') || (i[j - 1] == '"')
	|| (i[j - 1] == '(') || (i[j - 1] == ')') || (i[j - 1] == '{')
	|| (i[j - 1] == '}') || (i[j - 1] == '\0'))
		if (i[j] >= 97 && i[j] <= 122)
		{
			i[j] = (i[j] - 32);
		}
	}
	return (i);
}
