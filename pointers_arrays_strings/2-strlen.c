#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: is a char
 * Return: Returns the value of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
