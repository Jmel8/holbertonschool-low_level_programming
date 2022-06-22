#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @i: string to upper
 * Return: pointer i
 */
char *string_toupper(char *i)
{
	int j;

	for (j = 0; i[j] != '\0'; j++)
	{
		if (i[j] >= 97 && i[j] <= 122)
			i[j] = i[j] - 32;
	}
	return (i);
}
