#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: Number to parse
 * @m: Number to parse
 * Return: The number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int num = 0;

	while (xor > 0)
	{
		num += (xor & 1);
		xor = xor >> 1;
	}
	return (num);
}
