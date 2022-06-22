#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: string to concatenate
 * @src: to contatenate string
 * @n: byte limiter
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	char x[100];

	for (i = 0; dest[i] != '\0'; i++)
	{
		x[i] = dest[i];
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		x[i] = src[j];
		i++;
	}
	for (i = 0; x[i] != '\0'; i++)
	{
		dest[i] = x[i];
	}
	dest[i] = x[i];
	return (dest);
}
