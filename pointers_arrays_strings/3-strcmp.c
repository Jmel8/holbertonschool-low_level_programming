#include "main.h"
#include <string.h>
/**
 * _strcmp - function that compares two strings
 * @s1: string to compare
 * @s2: the comparison
 * Return: a integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = (s1[i] - s2[i]);
			break;
		}
	}
	return (j);
}
