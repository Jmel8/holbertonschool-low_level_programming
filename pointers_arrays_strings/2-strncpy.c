#include "main.h"
#include <string.h>
/**
 * *_strncpy - Write a function that copies a string
 * @dest: string to concatenate
 * @src: to contatenate string
 * @n: byte limiter
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
