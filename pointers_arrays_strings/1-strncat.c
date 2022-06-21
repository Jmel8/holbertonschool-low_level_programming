#include "main.h"
#include <string.h>
/**
 * *_strncat - function that concatenates two strings
 * @dest: string to concatenate
 * @src: to contatenate string
 * @n: byte limiter
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
