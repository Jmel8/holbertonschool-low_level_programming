#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: string to concatenate
 * @src: to contatenate string
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i])
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i += 1;
	}
	dest[i] = '\0';
return (dest);
}
