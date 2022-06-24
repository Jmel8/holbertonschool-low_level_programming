#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to root
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: a integer
 * @i: iterator
 * Return: result
 */
int _sqrt(int n, int i)
{
	int x = i * i;

	if (x > n)
		return (-1);
	if (x == n)
		return (i);
	return (_sqrt(n, i + 1));
}
