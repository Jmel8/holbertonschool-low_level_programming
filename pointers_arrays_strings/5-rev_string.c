#include "main.h"
#include <string.h>
/**
 * rev_string - Write a function that reverses a string
 * @s: is a char
 * Return: No return
 */
void rev_string(char *s)
{
	int i, j, k;

	j = strlen(s);

		for (i = 0; i < j / 2; i++)
		{
			k = s[i];
			s[i] = s[j - i - 1];
			s[j - i - 1] = k;
		}
}
