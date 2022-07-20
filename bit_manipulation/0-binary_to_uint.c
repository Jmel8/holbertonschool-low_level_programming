#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int i = 0;
	int t = 0, p = 1;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
				t += p;
			p *= 2;
		}
		else
			return (0);
	}
	return (t);
}
