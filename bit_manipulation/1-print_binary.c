#include "main.h"

/**
 * print_binary - converts unsigned int values to binary
 * @n: binary string
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = n;
	char j;

	if (i > 1)
	{
		i >>= 1;
		print_binary(i);
	}
	j = (n & 1);
	_putchar(j + '0');
}
