#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: variable
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int r;

	if (n == 0)
		return (0);
	r = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		r += va_arg(ap, int);
	}
	va_end(ap);
	return (r);
}
