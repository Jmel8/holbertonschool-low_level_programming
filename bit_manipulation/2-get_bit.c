#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: binary string
 * @index: index to check
 * Return: bit in position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = n;

	if (index > ((sizeof(unsigned long int) * 8) + 1))
		return (-1);
	i >>= index;
	if ((i & 1) == 1)
		return (1);
	else
		return (0);
}
