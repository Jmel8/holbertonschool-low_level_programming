#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: write string
 * @src: copy string
 * Return: No return
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
