#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: the address of memory to print
 * @b: the byte to write
 * @n: a integer
 * Return: value to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
