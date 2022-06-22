#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: is destination memory
 * @src: is source memory
 * @n: number of bytes to copy
 * Return: a string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
